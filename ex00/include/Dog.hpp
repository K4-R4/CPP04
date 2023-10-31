/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:26:45 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:08:40 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#ifndef A_OUT_EX00_DOG_HPP_
#define A_OUT_EX00_DOG_HPP_

#include "Animal.hpp"
#include <string>

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog &obj);
  ~Dog();
  Dog &operator=(const Dog &obj);
  void MakeSound() const;
 private:
  static const std::string kDefaultType;
};

#endif //A_OUT_EX00_DOG_HPP_
