#pragma once
#include "D:\Cocos\frameworks\cocos2d-x\cocos\2d\CCLayer.h"
#include "cocos2d.h"
USING_NS_CC;
class Scene2 :
	public Layer
{
public:
	Scene2();
	~Scene2();

	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(Scene2);

};

