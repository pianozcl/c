//
// Created by 晨亮   周 on 2021/8/20.
//

#include "../include/factorial.h"
unsigned int factorial(unsigned int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

