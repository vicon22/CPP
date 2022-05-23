
#include "headers/Animal.h"
#include "headers/Cat.h"
#include "headers/Dog.h"
#include "headers/WrongCat.h"


static void	wrongTest(void)
{
    const WrongAnimal	*w = new WrongCat();

    std::cout << "w is " << w->getType() << " : ";
    w->makeSound();

    delete w;
}

static void	subjectTest(void)
{
    const Animal	*meta = new Animal();
    const Animal	*j = new Dog();
    const Animal	*i = new Cat();

    std::cout << "j is " << j->getType() << " : ";
    j->makeSound();
    std::cout << "i is " << i->getType() << " : ";
    i->makeSound();
    std::cout << "m is " << meta->getType() << " : ";
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
}

int	main(void)
{
    std::cout << "-------------------" << std::endl;
    subjectTest();
    std::cout << "-------------------" << std::endl;
    wrongTest();
    std::cout << "-------------------" << std::endl;
    return (0);
}