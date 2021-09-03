/// @file
/// @author Jongkuk Lim <limjk@jmarple.ai>
/// @copyright 2021 J.Marple
/// @brief Main source code.

#include <iostream>
#include <string>

#include "first_module/first_module.hpp"
#include "second_module/second_module.hpp"

int main(int argc, char **argv) {
  for (int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }

  first_module::demo_print_hello(argc);

  return 0;
}
