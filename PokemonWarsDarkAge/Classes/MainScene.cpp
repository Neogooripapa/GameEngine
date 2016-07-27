#include "MainScene.h"
#include "NewGameScene.h"

USING_NS_CC;

Scene* MainScene::createScene()
{
    auto scene = Scene::create();
    auto layer = MainScene::create();
    scene->addChild(layer);
    return scene;
}

bool MainScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
	// 화면 크기 가져오기
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	// 메뉴 아이템 생성
	auto newGameItem = MenuItemFont::create("NEW GAME", this, menu_selector(MainScene::menuNewGameCallback, this));
	auto loadItem = MenuItemFont::create("LOAD", this, menu_selector(MainScene::menuLoadCallback, this));
	auto closeItem = MenuItemFont::create("CLOSE", this, menu_selector(MainScene::menuCloseCallback, this));

    // 메뉴에 아이템 추가
    auto menu = Menu::create(newGameItem, loadItem, closeItem, NULL);
    menu->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2));
	menu->alignItemsVerticallyWithPadding(15.0);
    this->addChild(menu, 1);

    return true;
}

void MainScene::menuNewGameCallback(Ref* pSender)
{
	auto newGameScene = NewGameScene::createScene();
	CCDirector::sharedDirector()->pushScene(newGameScene);
}

void MainScene::menuLoadCallback(Ref* pSender)
{

}

void MainScene::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
