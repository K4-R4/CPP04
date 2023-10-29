/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:19:56 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:19:56 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#include "WrongAnimal.hpp"
#include <iostream>

const std::string WrongAnimal::kDefaultType = "Wrong Animal";

WrongAnimal::WrongAnimal() {
  std::cout << "Wrong Animal constructor called" << std::endl;
  type_ = kDefaultType;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : Animal(obj) {
  std::cout << "Wrong Animal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
  Animal::operator=(obj);
  return *this;
}

void WrongAnimal::MakeSound() const {
  std::cout << "Wrong Animal A wrong animal is making sound" << std::endl;
}