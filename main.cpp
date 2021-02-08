#include "Weapon.h"
#include "Character.h"

int main()
	{

	cout << "Welcome to character customiztion menu ";
	Human* human = new Human("Peter", 100);
	Orc* orc = new Orc("Darkar", 100);
	Undead* undead = new Undead("Ainz", 100);

	Character* list[3];
	list[0] = human;
	list[1] = orc;
	list[2] = undead;

	for(int i = 0; i <3; i++)
	{
		list[i]->DisplayInfo();
	}
	cout << "pick a number to delete a charcter: ";
	int i;
	cin >> i;
	list[i] = nullptr;
	delete list[i];
	
	human = nullptr;
	orc = nullptr;
	undead = nullptr;
	delete human;
	delete orc;
	delete undead;	

	
		return 0;
	}
