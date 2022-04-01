#pragma once
//#include "Game.h"
#include "Aircraft.h"
#include "FrameResource.h"
#include "CommandQueue.h"
#include "Command.h"

class World
{
public:
	World(Game* game);
	void								update(const GameTimer& gt);
	void								drawOcean(Game* gameRef);
	void								buildScene();
	void								draw();
	CommandQueue&						getCommandQueue();
	CommandQueue						mCommandQueue;


private:
	void								loadTextures();



#pragma region step 3
	void								adaptPlayerPosition();
	void								adaptPlayerVelocity();
#pragma endregion


private:
	enum Layer
	{
		Background,
		Air,
		LayerCount
	};


private:

	SceneNode*							mSceneGraph;
	std::array<SceneNode*, LayerCount>	mSceneLayers;

	//sf::FloatRect						mWorldBounds;
	Aircraft* mPlayerAircraft;
	Game* mGame;
};
