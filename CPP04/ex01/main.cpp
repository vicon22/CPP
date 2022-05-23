
#include <iomanip>
#include "headers/Cat.h"
#include "headers/Dog.h"
#include "headers/Brain.h"


static void	printTitle(std::string title)
{
    std::cout << std::endl;
    std::cout << "========================= " << title << " =========================" << std::endl;
    std::cout << std::endl;
}

static void	testLeaks(void)
{
    printTitle("LEAKS");
    const Animal	*dog = new Dog();
    const Animal	*cat = new Cat();

    delete dog;
    delete cat;
}

static void	testDeepCopy(void)
{
    printTitle("DEEP COPY");
    Dog	dog1;
    Dog	dog2;

    dog1.printIdeas();
    dog2.printIdeas();

    dog2 = dog1;
    std::cout << std::endl << "After assignation :" << std::endl;
    dog1.printIdeas();
    dog2.printIdeas();

    std::cout << std::endl;

    Cat	cat1;
    Cat	cat2(cat1);

    cat1.printIdeas();
    cat2.printIdeas();
}

static void	testSubject(int size)
{
    printTitle("SUBJECT");
    Animal	*arrayAnimals[2 * size];

    for (int i = 0; i < size; i++)
    {
        arrayAnimals[i] = new Dog();
        arrayAnimals[size + i] = new Cat();
    }

    for (int i = 0; i < 2 * size; i++)
        delete arrayAnimals[i];
}

int	main(void)
{
    testSubject(5);
    testLeaks();
    testDeepCopy();
    return (0);
}
