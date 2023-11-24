/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:56:18 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/24 12:51:16 by tkuramot         ###   ########.fr       */
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
  for (int i = 0; i < obj.materias_count; ++i) {
	if (obj.materias_[i]) {
	  materias_[i] = obj.materias_[i]->clone();
	  ++materias_count;
	}
  }
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource destructor called" << std::endl;
  for (int i = 0; i < materias_count; ++i) {
	  delete materias_[i];
  }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
  if (this == &obj) {
	return *this;
  }
  for (int i = 0; i < obj.materias_count; ++i) {
	  materias_[i] = obj.materias_[i]->clone();
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
  if (!materia) {
	return;
  }
  if (materias_count >= kMaxMaterias) {
	std::cout << "No more slots to learn materias!" << std::endl;
	delete materia;
	return;
  }
  std::cout << "MateriaSource learned " << materia->GetType() << std::endl;
  materias_[materias_count] = materia;
  ++materias_count;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
  for (int i = 0; i < kMaxMaterias; ++i) {
	if (materias_[i] && materias_[i]->GetType() == type) {
	  std::cout << "Creating learned materia, " << materias_[i]->GetType() << std::endl;
	  return materias_[i]->clone();
	}
  }
  std::cout << type << " not found in leaned materias" << std::endl;
  return NULL;
}