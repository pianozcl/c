
#include <stdio.h>

int main() {
  int a = 1;
  int *p = &a;
  int q = &a;
  printf("%x\n", p);  //e36966bc
  printf("%x\n", *p); //1
  printf("%x\n", *&*&*&a); //1  &取地址，*取该地址的值print(a) == print(*&a) == print(*&*&*&....*&a);
  printf("%x\n", q);  //e64526bc

  printf("%x\n", &p); //ee7076b0

  printf("%d\n", sizeof(int *));  //8       指针类型对于32位编译器占4字节，对于64位编译器，占8字节

}