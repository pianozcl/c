//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <limits.h>
int main() {
  int value;
  printf("%d\n" ,value);  //1
  printf("%d\n", sizeof(value));  //4  占用4字节
  printf("%x\n", &value); //ea3e16cc  打印16进制地址
}
