#include "../include/log.h"

void info(const std::string& info) {
  std::cout << "Info: " + info << std::endl;
}

void fatal(const std::string& fatal) {
  std::cout << "Fatal: " + fatal << std::endl;
  exit(-1);
}

