//
// Created by 晨亮   周 on 2021/8/16.
//

#include <stdio.h>
#define MAX(a, b) a > b ? a : b

int max(int a, int b) {
  return a > b ? a : b;
}
int main() {

  //宏函数参数并不会直接计算
  int i = MAX(3, MAX(5, 7));  //3

  int j = max(3, max(5,7)); //7
  printf("%d\n", i);
  printf("%d\n", j);
}



