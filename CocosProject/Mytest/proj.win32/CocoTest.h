#pragma once
#include "D:\Cocos\frameworks\cocos2d-x\cocos\2d\CCLayer.h"
#include "cocos2d.h"
USING_NS_CC;
class CocoTest :
	public Layer
{
public:
	CocoTest();
	~CocoTest();

	static cocos2d::Scene* createScene();
	void menuCloseCallback(cocos2d::Ref* pSender);
	virtual bool init();
	CREATE_FUNC(CocoTest);
};

