//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#define COLOR_RED 0xFF0000
int main() {
  float a = 100;
  int b = 3;
  printf("%f\n", a / b);  //33.333332
  printf("3 > 2: %d\n", 3 > 2); //3 > 2: 1       没有布尔类型，用整数表示
  printf("%d\n", 1 << 1);
  printf("%d\n", 1 >> 1);
}
