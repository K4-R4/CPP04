/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:29:05 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/23 12:34:49 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#include "Cure.hpp"
#include <iostream>
#include <string>

Cure::Cure() : AMateria("cure") {
  std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj.type_) {
  std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
  std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj) {
  (void)obj;
  return *this;
}

AMateria *Cure::clone() const {
  return new Cure(*this);
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.GetName() << "’s wounds *" << std::endl;
}