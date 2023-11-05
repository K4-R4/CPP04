//
// Created by k.t. on 2023/11/01.
//

#ifndef A_OUT_EX03_CHARACTER_HPP_
#define A_OUT_EX03_CHARACTER_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {
 public:
  Character(const std::string &name);
  Character(const Character &obj);
  ~Character();
  Character &operator=(const Character &obj);
  std::string const &GetName() const;
  void equip(AMateria *materia);
  void unequip(int idx);
  void use(int idx, ICharacter &target);
 protected:
  static const int kMaxSlots = 4;
  AMateria *inventory_[kMaxSlots];
  bool is_equipped_[kMaxSlots];
 private:
  std::string name_;
};

#endif //A_OUT_EX03_CHARACTER_HPP_
