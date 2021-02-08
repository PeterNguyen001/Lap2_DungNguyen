#include"Character.h"

Character::Character()
{
	setName("");
	setHealth(100);
}

Character::Character(string name, int health)
{
	setName(name);
	setHealth(health);
}

Human::Human()
{
	setName("Peter");
	setHealth(100);
}

void Human::DisplayInfo()
{
	cout << "\n\n" << "Human\n";
	cout << endl << "Name: " << getName() << endl << "Heatlh: " << getHealth() << endl;
	critical();
	cout<<getWeapon();
}

Orc::Orc()
{
	setName("Dakar");
	setHealth(100);
}

void Orc::DisplayInfo()
{
	cout << "\n\n" << "Orc\n";
	cout << endl << "Name: " << getName() << endl << "Heatlh: " << getHealth() << endl;
	cout << "You have extra health\n";
	cout << getWeapon();
}

Undead::Undead()
{
	setName("Ainz");
	setHealth(100);
}

void Undead::DisplayInfo()
{
	cout << "\n\n" << "Undead\n";
	cout << endl << "Name: " << getName() << endl << "Heatlh: " << getHealth() << endl;
	rot();
	cout << getWeapon();
}

