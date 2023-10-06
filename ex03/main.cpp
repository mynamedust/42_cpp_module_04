#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Floor.hpp"
#include <stdlib.h>

int main() {
	Character char1("Igor");
	Character char2("VOVCHIK");
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();

	char1.equip(ice);
	char1.unequip(0);
	char2.equip(cure);
	char2.unequip(0);
	system("leaks aclass");
}