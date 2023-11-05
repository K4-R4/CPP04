//
// Created by k.t. on 2023/11/01.
//

#ifndef A_OUT_EX03_ICHARACTER_HPP_
#define A_OUT_EX03_ICHARACTER_HPP_

#include "AMateria.hpp"
#include <string>

class ICharacter {
 public:
  virtual ~ICharacter();
  virtual std::string const &GetName() const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};

#endif //A_OUT_EX03_ICHARACTER_HPP_
