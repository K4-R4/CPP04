/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:54:01 by tkuramot          #+#    #+#             */
/*   Updated: 2023/11/05 18:54:01 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/11/05.
//

#include "IMateriaSource.hpp"
#include <iostream>

IMateriaSource::~IMateriaSource() {
  std::cout << "IMateriaSource destructor called" << std::endl;
}