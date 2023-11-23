/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:01:16 by kura              #+#    #+#             */
/*   Updated: 2023/11/23 12:09:08 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

int main() {
  {
	std::cout << "==========================TEST 0==========================" << std::endl;
	const Animal *animals[] = {
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
	};
	for (int i = 0; i < 8; ++i) {
	  std::cout << "Type: " << animals[i]->GetType() << std::endl;
	  animals[i]->MakeSound();
	  delete animals[i];
	}
  }
  {
	std::cout << "==========================TEST 1==========================" << std::endl;
	const Animal *animals[] = {
		new Animal(),
		new Dog(),
		new Cat()
	};
	for (int i = 0; i < 3; ++i) {
	  std::cout << "Type: " << animals[i]->GetType() << std::endl;
	  animals[i]->MakeSound();
	  delete animals[i];
	}
  }
  {
	std::cout << "==========================TEST 2==========================" << std::endl;
	const WrongAnimal *animals[] = {
		new WrongAnimal(),
		new WrongCat()
	};
	for (int i = 0; i < 2; ++i) {
	  std::cout << "Type: " << animals[i]->GetType() << std::endl;
	  animals[i]->MakeSound();
	  delete animals[i];
	}
	std::cout << "--------------------------DERIVED--------------------------" << std::endl;
	WrongCat *cat = new WrongCat;
	std::cout << "Type: " << cat->GetType() << std::endl;
	cat->MakeSound();
	delete cat;
  }
  {
	std::cout << std::endl;
	std::cout << "==========================SPECIAL MEMBER FUNCS==========================" << std::endl;
	{
	  std::cout << "--------------------------ANIMAL--------------------------" << std::endl;
	  Animal animal1;
	  Animal animal2(animal1);
	  animal1 = animal2;
	}
	{
	  std::cout << "--------------------------DOG--------------------------" << std::endl;
	  Dog dog1;
	  Dog dog2(dog1);
	  dog1 = dog2;
	}
	{
	  std::cout << "--------------------------CAT--------------------------" << std::endl;
	  Cat cat1;
	  Cat cat2(cat1);
	  cat1 = cat2;
	}
	{
	  std::cout << "--------------------------WRONG ANIMAL--------------------------" << std::endl;
	  WrongAnimal wrong_animal1;
	  WrongAnimal wrong_animal2(wrong_animal1);
	  wrong_animal1 = wrong_animal2;
	}
	{
	  std::cout << "--------------------------WRONG ANIMAL--------------------------" << std::endl;
	  WrongCat wrong_cat1;
	  WrongCat wrong_cat2(wrong_cat1);
	  wrong_cat1 = wrong_cat2;
	}
  }
  {
	std::cout << "==========================COPY==========================" << std::endl;
	{
	  std::cout << "--------------------------DOG--------------------------" << std::endl;
	  Dog *dog1 = new Dog();
	  dog1->GetBrain()->SetIdea(0, "HUNGRY!");
	  Dog *dog2 = new Dog(*dog1);
	  Dog dog3;
	  dog3 = *dog2;
	  try {
		std::cout << "Dog " << dog1->GetBrain()->GetIdea(0) << std::endl;
		std::cout << "Dog " << dog2->GetBrain()->GetIdea(0) << std::endl;
		std::cout << "Dog " << dog3.GetBrain()->GetIdea(0) << std::endl;
	  } catch (std::out_of_range &e) {
		std::cerr << "Index out of range" << std::endl;
		exit(1);
	  }
	  delete dog1;
	  delete dog2;
	}
	{
	  std::cout << "--------------------------CAT--------------------------" << std::endl;
	  Cat *cat1 = new Cat();
	  cat1->GetBrain()->SetIdea(0, "SLEEPY!");
	  Cat *cat2 = new Cat(*cat1);
	  Cat cat3;
	  cat3 = *cat2;
	  try {
		std::cout << "Cat " << cat1->GetBrain()->GetIdea(0) << std::endl;
		std::cout << "Cat " << cat2->GetBrain()->GetIdea(0) << std::endl;
		std::cout << "Cat " << cat3.GetBrain()->GetIdea(0) << std::endl;
	  } catch (std::out_of_range &e) {
		std::cerr << "Index out of range" << std::endl;
		exit(1);
	  }
	  delete cat1;
	  delete cat2;
	}
  }
  return (0);
}
