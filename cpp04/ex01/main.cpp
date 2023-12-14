/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:12 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/15 16:55:30 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void	testPdf(void);
void	testCatAndDogWithBrain(void);
void	testCanonicalFormatForBrain(void);
void	testInheritance(void);
void	testCanonicalForms(void);

void	printBrainIdea0(Brain *brain);
void	printAnimal(const Animal &animal);
void	printWrongAnimal(const WrongAnimal &wrongAnimal);

int	main(void)
{
	testPdf();
	testCatAndDogWithBrain();
	testCanonicalFormatForBrain();
	testInheritance();
	testCanonicalForms();
}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%  TABLE test asked by the subject %%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void	testPdf(void)
{
	std::cout << std::endl;
	std::cout << "================== TABLE test asked by the subject ==================" << std::endl;
	std::cout << std::endl;
	
	Animal *animals[4];
	
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	
	std::cout << std::endl;
	
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();

	std::cout << std::endl;
	
	for (int i = 0; i < 4; i++)
		delete animals[i];
}

////%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// //%%%%%%%%%%%%%%%%%%%%  TEST Cat & Dog with Brain %%%%%%%%%%%%%%%%%%%%%%%
////%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void	printBrainIdea0(Brain *brain)
{
	if (brain != NULL)
		std::cout << "Brain Idea number 0: " << brain->getIdea(0) << std::endl;
}

void	testCatAndDogWithBrain(void)
{
	{
	std::cout << std::endl;
	std::cout << "================== TESTS: LEAKS ==================" << std::endl;
	std::cout << std::endl;

	std::cout << "-------- DOG creation --------" << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;

	std::cout << "-------- CAT creation --------" << std::endl;
	const Animal* cat = new Cat();
	std::cout << std::endl;

	std::cout << "-------- DOG destruction --------" << std::endl;
	delete dog;
	std::cout << std::endl;

	std::cout << "-------- CAT destruction --------" << std::endl;
	delete cat;
	std::cout << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for DOG =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Dog dog;
		printBrainIdea0(dog.getBrain());
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		dog.getBrain()->setIdea(0, "BIG BRAIN IDEA");
		Dog bigDog(dog);
		printBrainIdea0(bigDog.getBrain());
		std::cout << std::endl;
		
		std::cout << "---------- Test of deep copy ----------" << std::endl;
		dog.getBrain()->setIdea(0, "normal brain idea");
		printBrainIdea0(dog.getBrain());
		printBrainIdea0(bigDog.getBrain());
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		Dog bigDog2;
		printBrainIdea0(bigDog2.getBrain());
		std::cout << "We assign BIG DOG (BIG BRAIN IDEA) to this Dog" << std::endl;
		bigDog2 = bigDog;
		printBrainIdea0(bigDog2.getBrain());
		std::cout << std::endl;
		
			std::cout << "---------- Test of deep copy ----------" << std::endl;
		bigDog2.getBrain()->setIdea(0, "BIG BRAIN IDEA 2");
		printBrainIdea0(bigDog.getBrain());
		printBrainIdea0(bigDog2.getBrain());
		std::cout << std::endl;	
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for CAT =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Cat cat;
		printBrainIdea0(cat.getBrain());
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		cat.getBrain()->setIdea(0, "BIG BRAIN IDEA");
		Cat bigCat(cat);
		printBrainIdea0(bigCat.getBrain());
		std::cout << std::endl;
		
		std::cout << "---------- Test of deep copy ----------" << std::endl;
		cat.getBrain()->setIdea(0, "normal brain idea");
		printBrainIdea0(cat.getBrain());
		printBrainIdea0(bigCat.getBrain());
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		Cat bigCat2;
		printBrainIdea0(bigCat2.getBrain());
		std::cout << "We assign BIG CAT (BIG BRAIN IDEA) to this Cat" << std::endl;
		bigCat2 = bigCat;
		printBrainIdea0(bigCat2.getBrain());
		std::cout << std::endl;
		
			std::cout << "---------- Test of deep copy ----------" << std::endl;
		bigCat2.getBrain()->setIdea(0, "BIG BRAIN IDEA 2");
		printBrainIdea0(bigCat.getBrain());
		printBrainIdea0(bigCat2.getBrain());
		std::cout << std::endl;	
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
}


//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// //%%%%%%%%%%%%%%%%%%%% BRAIN class TESTS %%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


// void	printBrainIdea0(const Brain &brain)
// {
// 	std::cout << "Brain Idea number 0: " << brain.getIdea(0) << std::endl;
// }

void	testCanonicalFormatForBrain(void)
{ 
	std::cout << std::endl;
	std::cout << "===================== CANONICAL FORMAT for BRAIN =====================" << std::endl;
	std::cout << std::endl;

	std::cout << "---------- Test of default constructor ----------" << std::endl;
	Brain brain;
	printBrainIdea0(&brain);
	std::cout << std::endl;
	
	std::cout << "---------- Test of copy constructor ----------" << std::endl;
	brain.setIdea(0, "BIG BRAIN");
	Brain bigBrain(brain);
	std::cout << "It has BIG BRAIN idea at index 0" << std::endl;
	printBrainIdea0(&bigBrain);
	std::cout << std::endl;	

	std::cout << "---------- Test of copy assignment ----------" << std::endl;
	Brain bigBrain2;
	printBrainIdea0(&bigBrain2);
	std::cout << "We assign BIG BRAIN to this Brain" << std::endl;
	bigBrain2 = bigBrain;
	printBrainIdea0(&bigBrain2);
	std::cout << std::endl;

	std::cout << "===================== OUT OF RANGE tests =====================" << std::endl;
	std::cout << std::endl;
	// SETTERS
	try
	{
		brain.setIdea(-1, "BIG BRAIN");
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		brain.setIdea(100, "BIG BRAIN");
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}

	// GETTERS
	try
	{
		brain.getIdea(-1);
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		brain.getIdea(100);
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------- Destruction --------------------" << std::endl;

}

////%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// //%%%%%%%%%%%%%%%%%%%%  TEST OF INHERITANCE %%%%%%%%%%%%%%%%%%%%%%%
////%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


void	testInheritance(void)
{
	std::cout << std::endl;
	std::cout << "================== TESTS: ANIMAL + DOGS ==================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "-------- ANIMAL creation --------" << std::endl;
	const Animal* animal = new Animal();
	std::cout << std::endl;

	std::cout << "-------- DOG creation --------" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "Dog type: " << dog->getType() << std::endl; 
	std::cout << std::endl;
	
	std::cout << "-------- makeSound() tests --------" << std::endl;
	std::cout << "Dog sound: ";
	dog->makeSound();
	std::cout << "Animal sound: ";
	animal->makeSound();
	std::cout << std::endl;
	
	std::cout << "================== TESTS: CATS ==================" << std::endl;
	std::cout << std::endl;

	std::cout << "-------- CAT creation --------" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "Cat type: " << cat->getType() << std::endl; 
	std::cout << std::endl;
	
	std::cout << "-------- makeSound() test --------" << std::endl;
	std::cout << "Cat sound: ";
	cat->makeSound();
	std::cout << std::endl;

	std::cout << "==================  DESTRUCTIONS ==================" << std::endl;
	std::cout << std::endl;

	std::cout << "-------- ANIMAL destruction --------" << std::endl;
	delete animal;
	std::cout << std::endl;

	std::cout << "-------- DOG destruction --------" << std::endl;
	delete dog;
	std::cout << std::endl;

	std::cout << "-------- CAT destruction --------" << std::endl;
	delete cat;
	std::cout << std::endl;

	std::cout << "================== TESTS: WRONGANIMAL + WRONGCATS ==================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "-------- WRONGANIMAL creation --------" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << std::endl;

	std::cout << "-------- WRONGCAT creation --------" << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "WrongCat type: " << wrongCat->getType() << std::endl; 
	std::cout << std::endl;
	
	std::cout << "-------- makeSound() tests --------" << std::endl;
	std::cout << "WrongCat sound: ";
	wrongCat->makeSound();
	std::cout << "WrongAnimal sound: ";
	wrongAnimal->makeSound();
	std::cout << std::endl;

	std::cout << "==================  DESTRUCTIONS ==================" << std::endl;
	std::cout << std::endl;

	std::cout << "-------- WRONGANIMAL destruction --------" << std::endl;
	delete wrongAnimal;
	std::cout << std::endl;

	std::cout << "-------- WRONGCAT destruction --------" << std::endl;
	delete wrongCat;
}


// //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// //%%%%%%%%%%%%%%%%%%%%  TEST OF CANONICAL FORM %%%%%%%%%%%%%%%%%%%%%%%
// //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void	printAnimal(const Animal &animal)
{
	std::cout << "Type: " << animal.getType() << std::endl;
}

void	printWrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "Type: " << wrongAnimal.getType() << std::endl;
}

void	testCanonicalForms(void)
{
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for ANIMAL =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Animal animalNoType;
		printAnimal(animalNoType);
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		animalNoType.setType("pig");
		Animal pig(animalNoType);
		printAnimal(pig);	
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		Animal pig2;
		printAnimal(pig2);
		std::cout << "We assign pig to this animal with no type" << std::endl;
		pig2 = pig;
		printAnimal(pig2);
		std::cout << std::endl;
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for DOG =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Dog dog;
		printAnimal(dog);
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		dog.setType("BIG DOG");
		Dog bigDog(dog);
		printAnimal(bigDog);
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		Dog bigDog2;
		printAnimal(bigDog2);
		std::cout << "We assign BIG DOG to this Dog" << std::endl;
		bigDog2 = bigDog;
		printAnimal(bigDog2);
		std::cout << std::endl;
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for CAT =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Cat cat;
		printAnimal(cat);
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		cat.setType("BIG CAT");
		Cat bigCat(cat);
		printAnimal(bigCat);
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		Cat bigCat2;
		printAnimal(bigCat2);
		std::cout << "We assign BIG CAT to this Cat" << std::endl;
		bigCat2 = bigCat;
		printAnimal(bigCat2);
		std::cout << std::endl;
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for WrongAnimal =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		WrongAnimal wrongAnimal;
		printWrongAnimal(wrongAnimal);
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		wrongAnimal.setType("wrongPig");
		WrongAnimal wrongPig(wrongAnimal);
		printWrongAnimal(wrongPig);	
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		WrongAnimal wrongPig2;
		printWrongAnimal(wrongPig2);
		std::cout << "We assign wrongPig to this WrongAnimal" << std::endl;
		wrongPig2 = wrongPig;
		printWrongAnimal(wrongPig2);
		std::cout << std::endl;
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for WrongCat =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		WrongCat wrongCat;
		printWrongAnimal(wrongCat);
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		wrongCat.setType("BIG WRONGCAT");
		WrongCat bigWrongCat(wrongCat);
		printWrongAnimal(bigWrongCat);
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		WrongCat bigWrongCat2;
		printWrongAnimal(bigWrongCat2);
		std::cout << "We assign BIG WRONGCAT to this WrongCat" << std::endl;
		bigWrongCat2 = bigWrongCat;
		printWrongAnimal(bigWrongCat2);
		std::cout << std::endl;
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
}