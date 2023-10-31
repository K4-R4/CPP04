/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:26:29 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:04:38 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#include "Brain.hpp"
#include "Cat.hpp"
#include <iostream>

const std::string Cat::kDefaultType = "Cat";

Cat::Cat() {
  std::cout << "Cat constructor called" << std::endl;
  type_ = kDefaultType;
  brain_ = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj) {
  std::cout << "Cat copy constructor called" << std::endl;
  brain_ = new Brain(*obj.brain_);
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
  delete brain_;
}

Cat &Cat::operator=(const Cat &obj) {
  if (this == &obj)
	return *this;
  Animal::operator=(obj);
  Brain *temp = brain_;
  brain_ = new Brain(*obj.brain_);
  delete temp;
  return *this;
}

Brain *Cat::GetBrain() const {
  return brain_;
}

void Cat::SetBrain(Brain *brain) {
  brain_ = brain;
}

void Cat::MakeSound() const {
  std::cout << "Cat Meow meow" << std::endl;
}
