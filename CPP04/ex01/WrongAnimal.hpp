#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
    std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& tocopy);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &toCopy);
        std::string getType() const;
        void    makeSound(void) const;
};

#endif