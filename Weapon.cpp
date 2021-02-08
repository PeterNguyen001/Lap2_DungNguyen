#include "Weapon.h"

Weapon::Weapon()
{
	setName("Iron word");
	setDescription("A sword made of iron");
	setDamage(100);
	setAbilities("Attack", "Guard");
}

Weapon::Weapon(string name, string description, int damage, string ability_1, string ability_2)
{
	setName(name);
	setDescription(description);
	setDamage(damage);
	setAbilities(ability_1, ability_2);
}

void Weapon::setAbilities(string ability_1, string ability_2)
{
	*m_abilities  = ability_1;
	*(m_abilities + 1) = ability_2;
}

ostream& operator<<(ostream& out, Weapon weapon)
{
	out << "Weapon: " << weapon.getName()
		<< ", Description: " << weapon.getDescription()
		<< ", Damage: " << weapon.getDamage()
		<< ", Abilities: " << weapon.getAbilities(0) << ", " << weapon.getAbilities(1) << endl;
	return out;
}
