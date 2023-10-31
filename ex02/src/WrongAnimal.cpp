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

WrongAnimal::WrongAnimal() : type_(kDefaultType) {
  std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : type_(obj.type_) {
  std::cout << "Wrong Animal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
  type_ = obj.type_;
  return *this;
}

const std::string &WrongAnimal::GetType() const {
  return type_;
}

void WrongAnimal::SetType(const std::string &type) {
  type_ = type;
}

void WrongAnimal::MakeSound() const {
  std::cout << "Wrong Animal A wrong animal is making sound" << std::endl;
}
