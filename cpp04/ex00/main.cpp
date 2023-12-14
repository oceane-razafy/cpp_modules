/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:12 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/15 18:10:31 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	testInheritance(void);
void	testCanonicalForms(void);

int main(void)
{
	testInheritance();
	testCanonicalForms();
	return (0);
}

//%%%%%%%%%%%%%%%%%%%%  TEST OF INHERITANCE %%%%%%%%%%%%%%%%%%%%%%%

void	testInheritance(void)
{

	std::cout << "================== TESTS: ANIMAL + DOGS ==================" << std::endl;
	
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

	std::cout << "-------- CAT creation --------" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "Cat type: " << cat->getType() << std::endl; 
	std::cout << std::endl;
	
	std::cout << "-------- makeSound() test --------" << std::endl;
	std::cout << "Cat sound: ";
	cat->makeSound();
	std::cout << std::endl;

	std::cout << "==================  DESTRUCTIONS ==================" << std::endl;

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
	
	std::cout << "-------- WRONGANIMAL creation --------" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << std::endl;

	std::cout << "-------- WRONGCAT wrongCat creation (put inside a Wrong Animal *) --------" << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "WrongCat type: " << wrongCat->getType() << std::endl; 
	std::cout << std::endl;
	
	std::cout << "-------- makeSound() tests --------" << std::endl;
	std::cout << "WrongCat sound: ";
	wrongCat->makeSound();
	std::cout << "WrongAnimal sound: ";
	wrongAnimal->makeSound();
	std::cout << std::endl;
	
	std::cout << "-------- WRONGCAT wrongCat2 creation (put inside a Wrong Cat *) --------" << std::endl;
	const WrongCat* wrongCat2 = new WrongCat();
	std::cout << "WrongCat type: " << wrongCat2->getType() << std::endl; 
	std::cout << std::endl;
	
	std::cout << "-------- makeSound() tests --------" << std::endl;
	std::cout << "WrongCat2 sound: ";
	wrongCat2->makeSound();
	std::cout << "WrongAnimal sound: ";
	wrongAnimal->makeSound();
	std::cout << std::endl;

	std::cout << "==================  DESTRUCTIONS ==================" << std::endl;

	std::cout << "-------- WRONGANIMAL destruction --------" << std::endl;
	delete wrongAnimal;
	std::cout << std::endl;

	std::cout << "-------- WRONGCAT wrongCat destruction --------" << std::endl;
	delete wrongCat;
	std::cout << std::endl;

	std::cout << "-------- WRONGCAT wrongCat2 destruction --------" << std::endl;
	delete wrongCat2;

}



//%%%%%%%%%%%%%%%%%%%%  TEST OF CANONICAL FORM %%%%%%%%%%%%%%%%%%%%%%%

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