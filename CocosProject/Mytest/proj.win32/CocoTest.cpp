#include "CocoTest.h"
#include "cocostudio/CocoStudio.h"
#include "Scene2.h"
#include "ui/CocosGUI.h"



CocoTest::CocoTest()
{
}


CocoTest::~CocoTest()
{
}

Scene* CocoTest::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = CocoTest::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

bool CocoTest::init()
{
	if (!Layer::init())
	{
		return false;
	}
	
	auto rootNode = CSLoader::createNode("MainScene.csb");

	addChild(rootNode);

	auto closeItem = static_cast<ui::Button*>(rootNode->getChildByName("Button_1"));
	closeItem->addTouchEventListener(CC_CALLBACK_1(CocoTest::menuCloseCallback, this));
	return true;
}

void CocoTest::menuCloseCallback(Ref* pSender)
{
	auto pscene = Scene2::createScene();
	Director::getInstance()->replaceScene(pscene);
}