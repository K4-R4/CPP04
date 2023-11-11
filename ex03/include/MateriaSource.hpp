/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:56:18 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/05 18:56:20 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/05.
//

#ifndef A_OUT_EX03_MATERIASOURCE_HPP_
#define A_OUT_EX03_MATERIASOURCE_HPP_

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource();
  MateriaSource(const MateriaSource &obj);
  ~MateriaSource();
  MateriaSource &operator=(const MateriaSource &obj);
  void learnMateria(AMateria *materia);
  AMateria *createMateria(const std::string &type);
 private:
  const static int kMaxMaterias = 4;
  AMateria *materias_[kMaxMaterias];
  int materias_count;
};

#endif //A_OUT_EX03_MATERIASOURCE_HPP_
