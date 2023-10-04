#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----------Animals test----------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout << "----------Wrong animals test----------" << std::endl;
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << w->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	w->makeSound();
	wc->makeSound();

	delete w;
	delete wc;
	return 0;
}

