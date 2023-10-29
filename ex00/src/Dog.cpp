/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:26:45 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:08:40 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#include "Dog.hpp"
#include <iostream>

const std::string Dog::kDefaultType = "Dog";

Dog::Dog() {
  std::cout << "Dog constructor called" << std::endl;
  type_ = kDefaultType;
}

Dog::Dog(const Dog &obj) : Animal(obj) {
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj) {
  Animal::operator=(obj);
  return *this;
}

void Dog::MakeSound() const {
  std::cout << "Dog Bow bow" << std::endl;
}