#pragma once
#include "Singleton.h"
#include "string"
#include <unordered_map>


template<typename T>
class ResourceMgr:public Singleton<ResourceMgr<T>> //싱글턴화 하는 인자를 넘겨줘야함 자식:부모
{
	friend Singleton<ResourceMgr<T>>;//왜 프렌드?

protected:
	ResourceMgr() = default;
	virtual ~ResourceMgr()
	{
		for (auto pair : resources)
		{
			delete pair.second;
		}
		resources.clear();//동적할당 삭제
	}

	ResourceMgr(const ResourceMgr&) = delete;
	ResourceMgr& operator=(const ResourceMgr&) = delete;

	std::unordered_map<std::string, T*> resources;
	
	static T Empty;


public:
	bool Load(const std::string& id)
	{
		auto it = resources.find(id);
		if (it != resources.end())
		{
			return false;
		}
	
		T* res = new T();
		bool success = res->loadFromFile(id);
		if (!success)
		{
			delete res; // 동적 할당된 메모리 해제
			return false;
		}

		resources.insert({id, res});
		return true; // 성공적으로 로드된 경우 true 반환
	}

	bool Load(const std::vector<std::string>& ids)
	{
		bool allSuccess = true;

		for (const auto& id : ids)
		{
			if (!Load(id))  // 기존 단일 Load 함수 재사용
			{
				std::cerr << "로드 실패: " << id << std::endl;
				allSuccess = false;
			}
		}

		return allSuccess;
	}

	bool Unload(std::string& id)
	{
		auto it = resources.find(id);
		if (it == resources.end())//못찾은경우
		{
			return false;
		}

		delete it->second;//new 삭제
		resources.erase(it);//컨테이너 삭제
		return true;
	}


	T& Get(const std::string& id)
	{
		auto it = resources.find(id);
		if (it == resources.end())
		{
			return Empty;
		}
		return *(it->second);
	}
};
template<typename T>
T ResourceMgr<T>::Empty; //스택딕 변수를 초기화