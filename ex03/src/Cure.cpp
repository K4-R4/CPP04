//
// Created by k.t. on 2023/11/01.
//

#include "Cure.hpp"
#include <iostream>
#include <string>

const std::string Cure::kDefaultType = "cure";

Cure::Cure() : AMateria(kDefaultType) {
  std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj.type_) {
  std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
  std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj) {
  type_ = obj.type_;
  return *this;
}

AMateria *Cure::clone() const {
  return new Cure(*this);
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.GetName() << "’s wounds *" << std::endl;
}