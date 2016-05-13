#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "Player.h"

class HelloWorld : public cocos2d::Layer
{
public:
	// there's no 'id' in cpp, so we recommend returning the class instance pointer
	static cocos2d::Scene* createScene();

	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();

	// implement the "static create()" method manually
	CREATE_FUNC(HelloWorld);

	virtual void onEnter() override;
	virtual void onExit() override;

	virtual void update(float dt);

	void setViewpointCenter(Vec2 Position);
private:
	Player*  m_player;
	TMXTiledMap* m_map;
};

#endif // __HELLOWORLD_SCENE_H__