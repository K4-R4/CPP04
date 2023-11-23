/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:52:34 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/23 21:33:45 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main() {
  {
	std::cout << "==========================BASIC TEST==========================" << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *temp[] = {
		src->createMateria("ice"),
		src->createMateria("cure")
	};
	me->equip(temp[0]);
	me->equip(temp[1]);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	for (int i = 0; i < 2; ++i) {
	  delete temp[i];
	}
	delete src;
  }
  {
	std::cout << "==========================SPECIAL MEMBER FUNCTIONS==========================" << std::endl;
	std::cout << "--------------------------MateriaSource--------------------------" << std::endl;
	MateriaSource *src1 = new MateriaSource();
	MateriaSource *src2 = new MateriaSource(*src1);
	*src1 = *src2;
	delete src1;
	delete src2;

	std::cout << "--------------------------Character--------------------------" << std::endl;
	Character *chr1 = new Character("Bob");
	Character *chr2 = new Character(*chr1);
	*chr1 = *chr2;
	delete chr1;
	delete chr2;

	std::cout << "--------------------------Cure--------------------------" << std::endl;
	Cure *cure1 = new Cure();
	Cure *cure2 = new Cure(*cure1);
	*cure1 = *cure2;
	delete cure1;
	delete cure2;

	std::cout << "--------------------------Ice--------------------------" << std::endl;
	Ice *ice1 = new Ice();
	Ice *ice2 = new Ice(*ice1);
	*ice1 = *ice2;
	delete ice1;
	delete ice2;
  }
  {
	std::cout << "==========================MateriaSource==========================" << std::endl;
	{
	  std::cout << "--------------------------Learn more than 4 materias--------------------------" << std::endl;
	  IMateriaSource *src = new MateriaSource();
	  src->learnMateria(new Cure());
	  src->learnMateria(new Cure());
	  src->learnMateria(new Cure());
	  src->learnMateria(new Cure());
	  src->learnMateria(new Cure());
	  delete src;
	}
	{
	  std::cout << "--------------------------Create materias--------------------------" << std::endl;
	  IMateriaSource *src = new MateriaSource();
	  src->learnMateria(new Cure());
	  src->learnMateria(new Ice());
	  AMateria *temp = src->createMateria("cure");
	  delete temp;
	  temp = src->createMateria("ice");
	  delete temp;
	  temp = src->createMateria("none");
	  delete temp;
	  delete src;
	}
  }
  {
	std::cout << "==========================Character==========================" << std::endl;
	{
	  std::cout << "--------------------------Basic Functions--------------------------" << std::endl;
	  Character *bob = new Character("Bob");
	  std::cout << "Character name is " << bob->GetName() << std::endl;
	  delete bob;
	}
	{
	  std::cout << "--------------------------Equip more than 4 materias--------------------------" << std::endl;
	  Character *bob = new Character("Bob");
	  IMateriaSource *src = new MateriaSource();
	  src->learnMateria(new Cure());

	  AMateria *temp[5];
	  for (int i = 0; i < 5; ++i) {
		temp[i] = src->createMateria("cure");
		bob->equip(temp[i]);
	  }
	  delete bob;
	  for (int i = 0; i < 5; ++i) {
		delete temp[i];
	  }
	  delete src;
	}
	{
	  std::cout << "--------------------------Unequip materias--------------------------" << std::endl;
	  Character *bob = new Character("Bob");
	  IMateriaSource *src = new MateriaSource();
	  src->learnMateria(new Cure());

	  AMateria *temp = src->createMateria("cure");
	  bob->equip(temp);
	  for (int i = 0; i < 4; ++i) {
		bob->unequip(i);
	  }
	  delete temp;
	  delete bob;
	  delete src;
	}
	{
	  std::cout << "--------------------------Use materias--------------------------" << std::endl;
	  IMateriaSource *src = new MateriaSource();
	  src->learnMateria(new Ice());
	  src->learnMateria(new Cure());

	  ICharacter *me = new Character("me");

	  AMateria *temp[] = {
		  src->createMateria("ice"),
		  src->createMateria("cure")
	  };
	  me->equip(temp[0]);
	  me->equip(temp[1]);

	  ICharacter *bob = new Character("bob");

	  try {
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(5, *bob);
	  } catch (std::out_of_range &e) {
		std::cout << "Character slot index out of range" << std::endl;
	  }

	  delete bob;
	  delete me;
	  for (int i = 0; i < 2; ++i) {
		delete temp[i];
	  }
	  delete src;
	}
  }
  {
	std::cout << "==========================Ice==========================" << std::endl;
	AMateria *ice = new Ice();
	AMateria *cloned_ice = ice->clone();
	ICharacter *bob = new Character("Bob");

	std::cout << ice->GetType() << std::endl;
	ice->use(*bob);
	cloned_ice->use(*bob);

	delete ice;
	delete cloned_ice;
	delete bob;
  }
  {
	std::cout << "==========================Cure==========================" << std::endl;
	AMateria *cure = new Cure();
	AMateria *cloned_cure = cure->clone();
	ICharacter *bob = new Character("Bob");

	std::cout << cure->GetType() << std::endl;
	cure->use(*bob);
	cloned_cure->use(*bob);

	delete cure;
	delete cloned_cure;
	delete bob;
  }
  return 0;
}
