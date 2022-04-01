#pragma once
#include "Command.h"
#include <map>

class CommandQueue;

class Player
{

public:
	Player();


	void					handleEvent(CommandQueue& commands, const GameTimer& gt);


	void					handleRealtimeInput(CommandQueue& commands, const GameTimer& gt);

#pragma region step 1
	//static const float		PlayerSpeed;
	enum Action
	{
		MoveLeft,
		MoveRight,
		MoveUp,
		MoveDown,
		GetPosition,
		ActionCount,
		Stop
	};
	void					assignKey(Action action, std::string key);
	std::string					getAssignedKey(Action action) const;

private:
	void					initializeActions();
	static bool				isRealtimeAction(Action action);

private:
	std::map<std::string, Action>			mKeyBinding;
	std::map<Action, Command>				mActionBinding;
#pragma endregion
};

