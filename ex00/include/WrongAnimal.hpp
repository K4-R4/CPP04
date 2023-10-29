/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:19:56 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:20:46 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#ifndef A_OUT_EX00_WRONGANIMAL_HPP_
#define A_OUT_EX00_WRONGANIMAL_HPP_

#include "Animal.hpp"
#include <string>

class WrongAnimal : public Animal {
 private:
  static const std::string kDefaultType;
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &obj);
  ~WrongAnimal();
  WrongAnimal &operator=(const WrongAnimal &obj);
  void MakeSound() const;
};

#endif //A_OUT_EX00_WRONGANIMAL_HPP_
