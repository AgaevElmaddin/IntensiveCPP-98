#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP

#include "ClassAnimal.hpp"

class ClassCat: virtual public ClassAnimal
{
	public:
			ClassCat();
			ClassCat(std::string type);
			ClassCat(const ClassCat& copy);
			virtual ~ClassCat();

			ClassCat& operator=(const ClassCat& copy);

			virtual void	makeSound() const;
};

#endif
