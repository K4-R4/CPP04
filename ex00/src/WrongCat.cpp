/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:20:11 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:20:11 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#include "WrongCat.hpp"
#include <iostream>

const std::string WrongCat::kDefaultType = "Wrong Cat";

WrongCat::WrongCat() : WrongAnimal() {
  std::cout << "Wrong Cat constructor called" << std::endl;
  type_ = kDefaultType;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal() {
  std::cout << "Wrong Cat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "Wrong Cat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
  WrongAnimal::operator=(obj);
  return *this;
}
void WrongCat::MakeSound() const {
  std::cout << "Wrong Cat Wrong meow wrong meow" << std::endl;
}