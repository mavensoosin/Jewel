#include "GameScene.h"

USING_NS_CC;

Scene* GameScene::scene()
{
    // 'scene' is an autorelease object
    Scene *scene = Scene::create();
    
    // 'layer' is an autorelease object
    GameScene *layer = GameScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Sprite *bgSprite = Sprite::create("bg.png");
    bgSprite->setPosition(Point(240, 160));
    this->addChild(bgSprite, 0);
    
    return true;
}
