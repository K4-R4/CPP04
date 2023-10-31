/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:26:02 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:04:38 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#ifndef A_OUT_EX00_ANIMAL_HPP_
#define A_OUT_EX00_ANIMAL_HPP_

#include <string>

class Animal {
 public:
  Animal();
  Animal(const Animal &obj);
  virtual ~Animal();
  Animal &operator=(const Animal &obj);
  const std::string &GetType() const;
  void SetType(const std::string &type);
  virtual void MakeSound() const;
 private:
  static const std::string kDefaultType;
 protected:
  std::string type_;
};

#endif //A_OUT_EX00_ANIMAL_HPP_
