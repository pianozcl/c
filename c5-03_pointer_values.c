
#include <stdio.h>

int *pointer;
void dangerousPointer() {
  int a = 2;
  pointer = &a;
}

int main() {
//  int *p = 100;
//  printf("%d\n", p);
//  printf("%d\n", *p);
//
//  printf("%x\n", &p);
  int *p = NULL;    //NULL是宏定义字面量等于0
  //*p = 3;   error

  //当指针不为NULL，也就是已经初始化当时候，执行代码块
  if (p) {

  }
  printf("%x\n", p);

  //野指针，危险操作。函数释放后，之前的地址具有不确定性
  dangerousPointer();
  printf("%x\n", pointer);  //e4fce68c
}