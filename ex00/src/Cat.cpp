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

#include "Cat.hpp"
#include <iostream>

const std::string Cat::kDefaultType = "Cat";

Cat::Cat() {
  std::cout << "Cat constructor called" << std::endl;
  type_ = kDefaultType;
}

Cat::Cat(const Cat &obj) : Animal(obj) {
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj) {
  Animal::operator=(obj);
  return *this;
}

void Cat::MakeSound() const {
  std::cout << "Cat Meow meow" << std::endl;
}