#include "NewGameScene.h"

USING_NS_CC;

Scene* NewGameScene::createScene()
{
	auto scene = Scene::create();
	auto layer = NewGameScene::create();
	scene->addChild(layer);
	return scene;
}

bool NewGameScene::init()
{
	if (!Layer::init())
	{
		return false;
	}

	return true;
}