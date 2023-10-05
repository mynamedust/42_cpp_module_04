#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main() {
	Character char1("Igor");
	AMateria* ice = new Ice();

	char1.equip(ice);
}