//
// Created by k.t. on 2023/11/01.
//

#include "Ice.hpp"
#include <iostream>
#include <string>

const std::string Ice::kDefaultType = "ice";

Ice::Ice() : AMateria(kDefaultType) {
  std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj.type_) {
  std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
  std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj) {
  type_ = obj.type_;
  return *this;
}

AMateria *Ice::clone() const {
  return new Ice(*this);
}

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.GetName() << " *" << std::endl;
}