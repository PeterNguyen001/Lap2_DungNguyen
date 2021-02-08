#pragma once
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
private:
	string m_name;
	string m_description;
	int m_damage;
	string m_abilities[2];
public:

	Weapon();
	
	Weapon(string name, string description, int damage, string ability_1, string ability_2);

	~Weapon()= default;
	
	void setName(string name)
    {
		m_name = name;
    }
	
	string getName()
	{
		return m_name;
	}
	
	void setDescription(string description)
	{
		m_description = description;
	}
	
	string getDescription()
	{
		return m_description;
	}
	
    void setDamage(int damage)
	{
		m_damage = damage;
	}
	
	int getDamage()
	{
		return m_damage;
	}

	string getAbilities(int i)
	{
		return *(m_abilities+i);
	}

	void setAbilities(string ability_1, string ability_2);
	
	friend  ostream& operator<<(ostream& out, Weapon weapon);
};


