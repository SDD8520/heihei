#include "base.h"
#include <iostream>

base::base(const std::string &name) {
  std::cout << "copy construtors called!" << std::endl;    
}

base::base(std::string &&name) {
  std::cout << "move constructor called!" << std::endl;
}