/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:20:11 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/29 17:20:46 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/29.
//

#ifndef A_OUT_EX00_WRONGCAT_HPP_
#define A_OUT_EX00_WRONGCAT_HPP_

#include "Animal.hpp"
#include <string>

class WrongCat : public Animal {
 private:
  static const std::string kDefaultType;
 public:
  WrongCat();
  WrongCat(const WrongCat &obj);
  ~WrongCat();
  WrongCat &operator=(const WrongCat &obj);
  void MakeSound() const;
};

#endif //A_OUT_EX00_WRONGCAT_HPP_
