/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:26:45 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/31 13:10:12 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#include "Brain.hpp"
#include "Dog.hpp"
#include <iostream>

const std::string Dog::kDefaultType = "Dog";

Dog::Dog() {
  std::cout << "Dog constructor called" << std::endl;
  type_ = kDefaultType;
  brain_ = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj) {
  std::cout << "Dog copy constructor called" << std::endl;
  brain_ = new Brain(*obj.brain_);
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
  delete brain_;
}

Dog &Dog::operator=(const Dog &obj) {
  if (this == &obj)
	return *this;
  Animal::operator=(obj);
  Brain *temp = brain_;
  brain_ = new Brain(*obj.brain_);
  delete temp;
  return *this;
}

Brain *Dog::GetBrain() const {
  return brain_;
}

void Dog::SetBrain(Brain *brain) {
  brain_ = brain;
}

void Dog::MakeSound() const {
  std::cout << "Dog Bow bow" << std::endl;
}
