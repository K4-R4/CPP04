//
// Created by k.t. on 2023/11/01.
//

#ifndef A_OUT_EX03_CURE_HPP_
#define A_OUT_EX03_CURE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Cure : public AMateria {
 public:
  Cure();
  Cure(const Cure &obj);
  ~Cure();
  Cure &operator=(const Cure &obj);
  AMateria *clone() const;
  void use(ICharacter &target);
};

#endif //A_OUT_EX03_CURE_HPP_
