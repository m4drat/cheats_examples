#pragma once
#include "game.h"

class Unit
{
protected:
	struct HealStats
	{
		int health;
		int maxHealt;
		int minHealh;
		int heal;
		int maxHeal;
	};
	struct DamageStats
	{
		int damage;
		int maxDamage;
		int minDamage;
	};
	HealStats *healStats;
	DamageStats *damageStats;
	std::string handle;

public:
	Unit();
	~Unit();

	virtual int decrease_health(int dmg) = 0; // damage yourself
	virtual int increase_health(int heal) = 0;
	virtual void die(void) = 0;
	virtual int attack(Unit *unit) = 0; 
	virtual int heal(Unit *unit) = 0;

	std::string get_handle();
	int get_health();
	int get_heal();
	int get_damage();
};