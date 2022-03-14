#include "ClassAnimal.hpp"

ClassAnimal::ClassAnimal()
{
	type = "";
	std::cout << "ClassAnimal default constructor called" << std::endl;
}

ClassAnimal::ClassAnimal(std::string type): type(type)
{
	std::cout << "ClassAnimal constructor with parameters called" << std::endl;
}

ClassAnimal::ClassAnimal(const ClassAnimal& copy)
{
	std::cout << "ClassAnimal copy constructor called" << std::endl;
	*this = copy;
}

ClassAnimal::~ClassAnimal()
{
	std::cout << "ClassAnimal destructor called" << std::endl;
}

const std::string	ClassAnimal::getType() const
{
	return (this->type);
}

std::ostream& operator<< (std::ostream& out, const ClassAnimal& animal)
{
	out << animal.getType();
	return out;
}
