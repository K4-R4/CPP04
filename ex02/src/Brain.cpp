//
// Created by k.t. on 2023/10/31.
//

#include "Brain.hpp"
#include <iostream>
#include <stdexcept>

Brain::Brain() {
  std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj) {
  std::cout << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < kMaxIdeas; ++i) {
	ideas_[i] = obj.ideas_[i];
  }
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj) {
  for (int i = 0; i < kMaxIdeas; ++i) {
	ideas_[i] = obj.ideas_[i];
  }
  return *this;
}

const std::string &Brain::GetIdea(int idx) const {
  if (idx < 0 || idx >= kMaxIdeas) {
	throw std::out_of_range("Index out of range");
  }
  return ideas_[idx];
}

void Brain::SetIdea(int idx, const std::string &idea) {
  if (idx < 0 || idx >= kMaxIdeas) {
	throw std::out_of_range("Index out of range");
  }
  ideas_[idx] = idea;
}