/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:28:59 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/23 12:35:01 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#include "Ice.hpp"
#include <iostream>
#include <string>

Ice::Ice() : AMateria("ice") {
  std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj.type_) {
  std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
  std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj) {
  (void)obj;
  return *this;
}

AMateria *Ice::clone() const {
  return new Ice(*this);
}

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.GetName() << " *" << std::endl;
}