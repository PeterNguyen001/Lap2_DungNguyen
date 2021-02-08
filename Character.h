#pragma once
#include <string>
#include <iostream>
#include "Weapon.h"


using namespace std;

class Character
{
private:
 string m_name;
	int m_health;
	Weapon m_weapon;

public:
	Character();

	Character(string name, int health);
	
    virtual  string getName() const
	{
		return m_name;
	}
	
	void setName( string name)
	{
		m_name = name;
	}
	
	virtual  int getHealth()const
	{
		return m_health;
	}

	void setHealth(int health)
	{
		m_health = health;
	}
	
	virtual void DisplayInfo() = 0;

	Weapon getWeapon()const
	{
		return m_weapon;
	}

};

class Human : public Character
{
public:
	Human();
	Human(string name, int health) :Character(name, health){}
	void critical()
	{
		cout << "Your attacks have a chance to deal extra damage\n";
	}
	void DisplayInfo() override;
};

class Orc : public Character
{
public:
	Orc();
	Orc(string name, int health) :Character(name, health) {}

	virtual int getHealth()const
	{
		return Character:: getHealth() + 100;
	}
	void DisplayInfo() override;
};

class Undead : public Character
{
public:
	Undead();
	Undead(string name, int health) :Character(name, health) {}
	void rot()
	{
		cout << "You have a rotten arauma\n";
	}
	void DisplayInfo() override;
};