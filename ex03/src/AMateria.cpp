/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:53:29 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/01 14:53:29 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/01.
//

#include "AMateria.hpp"
#include <iostream>

const std::string AMateria::kDefaultType = "amateria";

AMateria::AMateria(const std::string &type) : type_(type) {
  std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria() {
  std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::GetType() const {
  return type_;
}

void AMateria::use(ICharacter &target) {
  std::cout << "AMateria was used on " << target.GetName() << std::endl;
}