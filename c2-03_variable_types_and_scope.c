//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <stdbool.h>

void localStaticVar(void) {
  //静态变量，不会随着函数推出销毁, 初始值默认0
  static int static_var = 0;

  //默认自动变量，块作用域，没有默认值
  auto int non_static_var = 0;
  printf("static %d\n", static_var++);
  printf("non static %d\n", non_static_var++);
}

void passByMemory(int param) {
  printf("%d\n", param);
}

//寄存器变量，不经过内存
void passByRegister(register int param) {
  printf("%d\n", param);
}

int main() {  //function scope
  //自动变量（不加auto默认auto）
  auto int value = 0;

  //块作用域 block scope
  {
    auto int a = 0;
  }

  for (int i = 0; i < 3; i++) {
    localStaticVar();
  }
  return 0;
}


