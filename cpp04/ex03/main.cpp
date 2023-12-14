/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:04:54 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 19:37:22 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void 	additionalTests();
void	testPdf(void);
void	printType(const AMateria &materia);
void 	printName(const Character &character);
void 	printInventory(AMateria *inventory[4]);
void 	printMateriaSource(AMateria *materias[4]);
void 	testCanonicalFormats(void);


int main(void)
{
	additionalTests();
	testPdf();
	testCanonicalFormats();
	
	return (0);
}

void additionalTests()
{
	std::cout << std::endl;
	std::cout << "===================== CHARACTER functions =====================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "---------- Creation of character 'me' ----------" << std::endl;
	Character* me = new Character("me");
	std::cout << std::endl;
	
	std::cout << "---------- Test of equip() with NULL ----------" << std::endl;
	AMateria* tmp;
	tmp = NULL;
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << "---------- Test of equip() with FULL INVENTORY ----------" << std::endl;
	me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
	std::cout << "WARNING: It's gonna be FULL now" << std::endl;
	tmp = new Ice();
    me->equip(tmp);
	delete tmp;
	std::cout << std::endl;

	std::cout << "---------- Test of unequip(): index -1, index 4 ----------" << std::endl;
    me->unequip(-1);
    me->unequip(4);
	std::cout << std::endl;

	std::cout << "---------- Test of unequip() a valid index: 0 ----------" << std::endl;
	tmp = me->getInventory()[0];
	me->unequip(0);
	delete tmp;
	std::cout << std::endl;

	std::cout << "---------- Test of unequip() again on 0, but NOW there is no materia on 0 ----------" << std::endl;
    me->unequip(0);
	std::cout << std::endl;

	std::cout << "---------- Test use() on index 0, but there is no materia on 0 ----------" << std::endl;
	ICharacter *enemy = new Character("enemy");
	me->use(0, *enemy);
	std::cout << std::endl;

	std::cout << "---------- Test use() on index 1, with Ice materia ----------" << std::endl;
	me->use(1, *enemy);
	std::cout << std::endl;

	std::cout << "---------- Test use() with invalid indexes : -1, 4 or with nothing at index ----------" << std::endl;
	me->use(-1, *enemy);
	me->use(4, *enemy);
	me->use(0, *enemy); // nothing at this index, it was deleted before
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "===================== MATERIA SOURCE functions =====================" << std::endl;
	std::cout << std::endl;

	std::cout << "---------- Creation of materia source ----------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	std::cout << "---------- Learn Materia Failed ----------" << std::endl;
	src->learnMateria(NULL);
	std::cout << std::endl;

	std::cout << "---------- Test of creating a false materia (before learning) ----------" << std::endl;
	AMateria *materia = src->createMateria("marble");
	if (materia == NULL)
		std::cout << "materia is indeed equal to NULL" << std::endl;
	std::cout << std::endl;

	std::cout << "---------- Test of learnMateria() with materia sources FULL ----------" << std::endl;
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	std::cout << "WARNING: It's gonna be FULL now" << std::endl;
	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;
	std::cout << std::endl;

	std::cout << "---------- Test of creating a false materia (after learning) ----------" << std::endl;
	materia = src->createMateria("marble");
	std::cout << std::endl;

	std::cout << "---------- Destruction ----------" << std::endl;
	delete me;
	delete enemy;
	delete src;
}

void	testPdf(void)
{

	std::cout << std::endl;
	std::cout << "===================== TEST PDF =====================" << std::endl;
	std::cout << std::endl;
		
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
    AMateria* tmp;
	
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
    me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	printType(const AMateria &materia)
{
	std::cout << "Materia Type: " << materia.getType() << std::endl;
}

void printName(const Character &character)
{
	std::cout << "Character Name: " << character.getName() << std::endl;
}

void printInventory(AMateria *inventory[4])
{
	std::cout << ">>>>>> INVENTORY >>>>>>" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			std::cout << "Index: " << i << " & Type: " <<  inventory[i]->getType() << std::endl;
		else
			std::cout << "Index: " << i << " & EMPTY" << std::endl;
	}
}

void printMateriaSource(AMateria *materias[4])
{
	std::cout << ">>>>>> MATERIA SOURCE >>>>>>" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL)
			std::cout << "Index: " << i << " & Type: " <<  materias[i]->getType() << std::endl;
		else
			std::cout << "Index: " << i << " & EMPTY" << std::endl;
	}
}

void testCanonicalFormats(void)
{
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for ICE =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Ice ice;
		printType(ice);
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		ice.setType("BIG ICE");
		Ice bigIce(ice);
		printType(bigIce);
		std::cout << std::endl;	
		
		std::cout << "---------- Test if one changes its attribute value ----------" << std::endl;
		ice.setType("normal ice");
		printType(ice);
		printType(bigIce);
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		Ice bigIce2;
		printType(bigIce2);
		std::cout << "We assign BIG ICE to this ice" << std::endl;
		bigIce2 = bigIce;
		printType(bigIce2);
		std::cout << std::endl;

		std::cout << "---------- Test if one changes its attribute value ----------" << std::endl;
		bigIce2.setType("BIG ICE 2");
		printType(bigIce);
		printType(bigIce2);
		std::cout << std::endl;	
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for CURE =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Cure cure;
		printType(cure);
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		cure.setType("BIG CURE");
		Cure bigCure(cure);
		printType(bigCure);
		std::cout << std::endl;	

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		Cure bigCure2;
		printType(bigCure2);
		std::cout << "We assign BIG CURE to this Cure" << std::endl;
		bigCure2 = bigCure;
		printType(bigCure2);
		std::cout << std::endl;
	}
	{ 
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for CHARACTER =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		Character characterNoName;
		printName(characterNoName);
		printInventory(characterNoName.getInventory());
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		std::cout << "We will create a character turtle with 1 ice and 1 cure" << std::endl;
		characterNoName.equip(new Ice());
		characterNoName.equip(new Cure());
		characterNoName.setName("turtle");
		Character turtle(characterNoName);
		printName(turtle);
		printInventory(turtle.getInventory());
		std::cout << std::endl;

		std::cout << "---------- Test of deep copy ----------" << std::endl;
		characterNoName.setName("with no name");
		AMateria *m1;
		AMateria *m2;
		m1 = characterNoName.getInventory()[0];
		m2 = characterNoName.getInventory()[1];
		characterNoName.unequip(0);
		characterNoName.unequip(1);
		delete m1;
		delete m2;
		printInventory(characterNoName.getInventory());
		printInventory(turtle.getInventory());
		std::cout << std::endl;

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		
		Character turtle2;
		printName(turtle2);
		printInventory(turtle2.getInventory());
		std::cout << std::endl;
		
		std::cout << "We put 2 ice and 2 cure to this character with no name" << std::endl;
		turtle2.equip(new Ice());
		turtle2.equip(new Ice());
		turtle2.equip(new Cure());
		turtle2.equip(new Cure());
		printInventory(turtle2.getInventory());
		std::cout << std::endl;
		
		std::cout << "We assign turtle to this character with no name" << std::endl;
		std::cout << "so name will be 'turtle' and 'inventory' will be with 1 ice and 1 cure again" << std::endl;
		turtle2 = turtle;
		printName(turtle2);
		printInventory(turtle2.getInventory());
		std::cout << std::endl;

		std::cout << "---------- Test of deep copy ----------" << std::endl;
		turtle2.setName("turtle2");
		m1 = turtle2.getInventory()[0];
		m2 = turtle2.getInventory()[1];
		turtle2.unequip(0);
		turtle2.unequip(1);
		delete m1;
		delete m2;
		printName(turtle);
		printInventory(turtle.getInventory());
		printName(turtle2);
		printInventory(turtle2.getInventory());
		std::cout << std::endl;
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "===================== CANONICAL FORMAT for MATERIA SOURCE =====================" << std::endl;
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		MateriaSource materiaSource;
		printMateriaSource(materiaSource.getMaterias());
		std::cout << std::endl;
		
		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		std::cout << "We will create a materia source src with 1 ice and 1 cure" << std::endl;
		materiaSource.learnMateria(new Ice());
		materiaSource.learnMateria(new Cure());
		MateriaSource src(materiaSource);
		printMateriaSource(src.getMaterias());
		std::cout << std::endl;

		std::cout << "---------- Test of deep copy ----------" << std::endl;
		AMateria *m1;
		AMateria *m2;
		m1 = materiaSource.getMaterias()[0];
		m2 = materiaSource.getMaterias()[1];
		materiaSource.setMateria(0, NULL);
		materiaSource.setMateria(1, NULL);
		delete m1;
		delete m2;
		printMateriaSource(materiaSource.getMaterias());
		printMateriaSource(src.getMaterias());
		std::cout << std::endl;

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		
		MateriaSource src2;
		printMateriaSource(src2.getMaterias());
		std::cout << std::endl;
		
		std::cout << "We put 2 ice and 2 cure to this materia source with no name" << std::endl;
		src2.learnMateria(new Ice());
		src2.learnMateria(new Ice());
		src2.learnMateria(new Cure());
		src2.learnMateria(new Cure());
		printMateriaSource(src2.getMaterias());
		std::cout << std::endl;
		
		std::cout << "We assign initial src to this new materia source" << std::endl;
		std::cout << "so it will be with 1 ice and 1 cure again" << std::endl;
		src2 = src;
		printMateriaSource(src2.getMaterias());
		std::cout << std::endl;

		std::cout << "---------- Test of deep copy ----------" << std::endl;
		m1 = src2.getMaterias()[0];
		m2 = src2.getMaterias()[1];
		src2.setMateria(0, NULL);
		src2.setMateria(1, NULL);
		delete m1;
		delete m2;
		printMateriaSource(src.getMaterias());
		printMateriaSource(src2.getMaterias());
		std::cout << std::endl;
		
		std::cout << "-------------------- Destruction --------------------" << std::endl;
	}
}