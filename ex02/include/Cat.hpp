/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:26:29 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:08:40 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#ifndef A_OUT_EX00_CAT_HPP_
#define A_OUT_EX00_CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat &obj);
  ~Cat();
  Cat &operator=(const Cat &obj);
  Brain *GetBrain() const;
  void SetBrain(Brain *brain);
  void MakeSound() const;
 private:
  static const std::string kDefaultType;
  Brain *brain_;
};

#endif //A_OUT_EX00_CAT_HPP_
