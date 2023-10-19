#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();
};

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	if (brain)
		delete brain;
};

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain();
	*this = other;
};

Cat& Cat::operator=(const Cat &other) {
	if (this != &other) {
		this->_type = other._type;
		*(this->brain) = *(other.brain);
	}
	return *this;
};

void Cat::makeSound() const{
	std::cout << _type << ": Meow" << std::endl;
}

Brain* Cat::getBrain() const {
	return brain;
}