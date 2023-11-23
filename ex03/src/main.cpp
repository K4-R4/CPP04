/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:52:34 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/23 13:42:04 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
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

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
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
  }
  return 0;
}
