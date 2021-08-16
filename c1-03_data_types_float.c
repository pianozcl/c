//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <limits.h>
int main() {

  printf("size of float %d\n", sizeof(float));  //size of float 4
  printf("size of double %d\n", sizeof(double));  //size of double 8

  float lat = 39.90815f;
  printf("%f\n", 39.908156f - lat); //0.000008    因为精度只有5为，所以结果不正确
  return 0;
}
