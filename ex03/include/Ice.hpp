//
// Created by k.t. on 2023/11/01.
//

#ifndef A_OUT_EX03_ICE_HPP_
#define A_OUT_EX03_ICE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria {
 public:
  Ice();
  Ice(const Ice &obj);
  ~Ice();
  Ice &operator=(const Ice &obj);
  AMateria *clone() const;
  void use(ICharacter &target);
 private:
  static const std::string kDefaultType;
};

#endif //A_OUT_EX03_ICE_HPP_
