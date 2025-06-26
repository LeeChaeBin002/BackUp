#pragma once
#include "Singleton.h"
#include "string"
#include <unordered_map>


template<typename T>
class ResourceMgr:public Singleton<ResourceMgr<T>> //�̱���ȭ �ϴ� ���ڸ� �Ѱ������ �ڽ�:�θ�
{
	friend Singleton<ResourceMgr<T>>;//�� ������?

protected:
	ResourceMgr() = default;
	virtual ~ResourceMgr()
	{
		for (auto pair : resources)
		{
			delete pair.second;
		}
		resources.clear();//�����Ҵ� ����
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
			delete res; // ���� �Ҵ�� �޸� ����
			return false;
		}

		resources.insert({id, res});
		return true; // ���������� �ε�� ��� true ��ȯ
	}

	bool Load(const std::vector<std::string>& ids)
	{
		bool allSuccess = true;

		for (const auto& id : ids)
		{
			if (!Load(id))  // ���� ���� Load �Լ� ����
			{
				std::cerr << "�ε� ����: " << id << std::endl;
				allSuccess = false;
			}
		}

		return allSuccess;
	}

	bool Unload(std::string& id)
	{
		auto it = resources.find(id);
		if (it == resources.end())//��ã�����
		{
			return false;
		}

		delete it->second;//new ����
		resources.erase(it);//�����̳� ����
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
T ResourceMgr<T>::Empty; //���õ� ������ �ʱ�ȭ