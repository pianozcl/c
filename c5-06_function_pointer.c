
#include <stdio.h>
#include <stdlib.h>

#define LEN 10

void initPointer(int **p, int len, int default_value) {
  *p = malloc(sizeof(int) * len);
  for (int i = 0; i < len; i++) {
    (*p)[i] = default_value;
  }
}

//typedef用于定义复杂类型别名，如下定义一个函数指针别名
typedef void (*Fun)(int i);
void *test(int a) {
  printf("%d\n", a);
}

int main() {
  printf("%x\n", &main);

  int *p;
  void (*func)() = &initPointer;    //函数指针
  func(&p, 10, 0);

  (*func)(&p, 10, 0);   //函数指针，也可这样调用函数

  Fun myFun = test;
  myFun(888);
}