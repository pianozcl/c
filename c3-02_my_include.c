//
// Created by 晨亮   周 on 2021/8/16.
//

//#include，预编译后，相当于引入函数声明。实际调用C标准库的实现
//如下：没有引入头文件，直接声明函数即可调用
#include "include/factorial.h"
#include <stdio.h>
int main() {
  int i = factorial(5);
  printf("%d\n", i);
}



