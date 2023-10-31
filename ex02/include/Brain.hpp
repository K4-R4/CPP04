//
// Created by k.t. on 2023/10/31.
//

#ifndef A_OUT_EX01_BRAIN_HPP_
#define A_OUT_EX01_BRAIN_HPP_

#include <string>

class Brain {
 public:
  Brain();
  Brain(const Brain &obj);
  ~Brain();
  Brain &operator=(const Brain &obj);
  const std::string &GetIdea(int idx) const;
  void SetIdea(int idx, const std::string &idea);
 private:
  static const int kMaxIdeas = 100;
  std::string ideas_[kMaxIdeas];
};

#endif //A_OUT_EX01_BRAIN_HPP_
