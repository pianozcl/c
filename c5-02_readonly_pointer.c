
#include <stdio.h>

int main() {
  int a = 1;
  int *p = &a;
  *p = 20;
  printf("%d\n", a);

  //定义不可修改的指针（只读指针变量）
  int *const cp = &a;
  *cp = 2;
  int b = 10;
  // cp = &b ERROR

  //指针指向的变量不可修改，指针可以修改（指向只读变量的指针）
  int const *cp2 = &a;
  // *cp2 = 2; ERROR
  cp2 = &b;

  //定义不可修改的指针指向的变量（指针和指针指向的变量都不可修改，从后往前看，*const ccp = &a定义了不可修改的指针ccp，const *const ccp定义了代表指针指向的变量不可修改）
  int const *const ccp = &a;
  //ccp = &b;     ERROR
  //*ccp = 100;   ERROR
}