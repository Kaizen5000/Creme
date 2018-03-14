#pragma once
#include "Game.h"

class Player
{
public:
	Player();
	virtual ~Player();

	virtual Game::dir selectMove(Game::pos currentPos) = 0;

protected:
	Game::pos current;
};

