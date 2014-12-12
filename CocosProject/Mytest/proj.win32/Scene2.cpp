#include "Scene2.h"
#include "cocostudio/CocoStudio.h"

Scene2::Scene2()
{
}


Scene2::~Scene2()
{
}

Scene* Scene2::createScene()
{
	auto pScene2 = Scene::create();
	auto pLayer2 = Scene2::create();
	auto pLayer3 = LayerColor::create(Color4B(0,128,128,255));
	pLayer3->setContentSize(CCSizeMake(120, 80));
	pLayer3->setPosition(Point(50,50));
	pScene2->addChild(pLayer2);
	pScene2->addChild(pLayer3);
	return pScene2;
}

bool Scene2::init()
{
	if (!Layer::init())
	{
		return false;
	}

	auto pnode = CSLoader::createNode("MyScene1.csb");
	addChild(pnode);
	return true;
}

