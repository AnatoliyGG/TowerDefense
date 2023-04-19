#pragma once
#include "GameObject.h"

class Enemy : public GameObject
{
protected:
	float maxhp, hp;
	int damage_to_player;
	float velocity;
	Vector2 direction;
	int loot;

public:
	Enemy();
	Enemy(const Enemy&);

	virtual void Move(float dt);
};

