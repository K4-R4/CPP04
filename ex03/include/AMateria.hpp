/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:53:29 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/23 12:33:08 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#ifndef A_OUT_EX03_AMATERIA_HPP_
#define A_OUT_EX03_AMATERIA_HPP_

#include <string>

class ICharacter;

class AMateria {
 public:
  AMateria(std::string const &type);
  virtual ~AMateria();
  std::string const &GetType() const;
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
 protected:
  std::string type_;
};

#endif //A_OUT_EX03_AMATERIA_HPP_
