/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:54:01 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/05 18:54:55 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/05.
//

#ifndef A_OUT_EX03_IMATERIASOURCE_HPP_
#define A_OUT_EX03_IMATERIASOURCE_HPP_

#include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource();
  virtual void learnMateria(AMateria *materia) = 0;
  virtual AMateria *createMateria(const std::string &type) = 0;
};

#endif //A_OUT_EX03_IMATERIASOURCE_HPP_
