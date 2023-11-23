/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:56:18 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/23 12:15:37 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/05.
//

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : materias_count(0) {
  std::cout << "MateriaSource constructor called" << std::endl;
  for (int i = 0; i < kMaxMaterias; ++i) {
	materias_[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource &obj) {
  std::cout << "MateriaSource copy constructor called" << std::endl;
  for (int i = 0; i < kMaxMaterias; ++i) {
	if (obj.materias_[i]) {
	  materias_[i] = obj.materias_[i]->clone();
	}
  }
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource destructor called" << std::endl;
  for (int i = 0; i < kMaxMaterias; ++i) {
	if (materias_[i]) {
	  delete materias_[i];
	}
  }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
  if (this == &obj) {
	return *this;
  }
  for (int i = 0; i < kMaxMaterias; ++i) {
	if (obj.materias_[i]) {
	  materias_[i] = obj.materias_[i]->clone();
	}
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
  if (!materia) {
	return;
  }
  if (materias_count >= kMaxMaterias) {
	return;
  }
  materias_[materias_count] = materia;
  ++materias_count;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
  for (int i = 0; i < kMaxMaterias; ++i) {
	if (materias_[i]->GetType() == type) {
	  return materias_[i]->clone();
	}
  }
  return NULL;
}