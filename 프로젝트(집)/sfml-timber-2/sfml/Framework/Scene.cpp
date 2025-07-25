#include "stdafx.h"
#include "Scene.h"

Scene::Scene(SceneIds id)
	: Id(id)
{
}

void Scene::Init()
{
	for (auto obj : gameObjects)
	{
		obj->Init();
	}
}

void Scene::Release()
{
	for (auto obj : gameObjects)
	{
		obj->Release();
		delete obj;
	}
	gameObjects.clear();
}

void Scene::Enter()
{
	for (auto obj : gameObjects)
	{
		obj->Reset();
	}
}

void Scene::Exit()
{
}

void Scene::Update(float dt)
{
	for (auto obj : gameObjects)
	{
		obj->Update(dt);
	}
}

void Scene::Draw(sf::RenderWindow& window)
{
	for (auto obj : gameObjects)
	{
		obj->Draw(window);
	}
}

void Scene::AddGameObject(GameObject* go)
{
	if (std::find(gameObjects.begin(), gameObjects.end(), go) == gameObjects.end())
	{
		gameObjects.push_back(go);
	}
}

void Scene::RemoveGameObject(GameObject* go)
{
	gameObjects.remove(go);
}

GameObject* Scene::FindGameObject(const std::string& name)
{
	for (auto obj : gameObjects)
	{
		if (obj->GetName() == name)
		{
			return obj;
		}
	}
	return nullptr;
}
