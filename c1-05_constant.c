//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#define COLOR_RED 0xFF0000
int main() {
  const int con = 0xFF0000;
  //con = 1;    只读变量不可修改

  printf("con address %x\n", &con);
  int *p = &con;  //但可以通过指针直接修改内存
  *p = 0;
  printf("con = %x\n", con);  //有的编译器，用指针修改后结果也不会变。比如使用g++编译时，值之所以没有改变，是因为编译时是常量，然后被编译器编译为立即数了。因此使用指针修改不会更改值。


  //macro。宏，相当于全局变量（预处理后相当于常量），不可修改
  printf("RED: %d\n", COLOR_RED);
#undef COLOR_RED    //取消宏，后面代码将不可用该宏变量

}
