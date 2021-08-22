
#include <stdio.h>
#include <stdarg.h>
#define ARRAY_SIZE 10
int main() {
  int arr[5];
  printf("%x\n", arr[10]);    //C没有数组越界检查
}