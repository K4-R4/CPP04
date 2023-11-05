/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:53:29 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/01 14:53:42 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#ifndef A_OUT_EX03_AMATERIA_HPP_
#define A_OUT_EX03_AMATERIA_HPP_

#include "ICharacter.hpp"
#include <string>

class AMateria {
 public:
  AMateria(std::string const &type);
  virtual ~AMateria();
  std::string const &GetType() const;
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
 protected:
  std::string type_;
  static const std::string kDefaultType;
};

#endif //A_OUT_EX03_AMATERIA_HPP_
