/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:05:31 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/11 13:53:53 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#ifndef A_OUT_EX03_ICHARACTER_HPP_
#define A_OUT_EX03_ICHARACTER_HPP_

#include <string>

class AMateria;

class ICharacter {
 public:
  virtual ~ICharacter();
  virtual std::string const &GetName() const = 0;
  virtual void equip(AMateria *materia) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};

#endif //A_OUT_EX03_ICHARACTER_HPP_
