/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:26:02 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:04:38 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#include "Animal.hpp"
#include <iostream>

const std::string Animal::kDefaultType = "Animal";

Animal::Animal() : type_(kDefaultType) {
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj) : type_(obj.type_) {
  std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj) {
  type_ = obj.type_;
  return *this;
}

const std::string &Animal::GetType() const {
  return type_;
}

void Animal::SetType(const std::string &type) {
  type_ = type;
}

void Animal::MakeSound() const {
  std::cout << "Animal An animal is making sound" << std::endl;
}
