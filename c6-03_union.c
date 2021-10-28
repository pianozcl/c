
#include <stdio.h>
//联合体中的变量或者结构共享一块内存
typedef union Operand {
  int int_operand; //4
  double double_operand;
  char *string_operand;
} Operand;

int main() {
  printf("%d\n", sizeof(Operand));  //8

  Operand operand = {.int_operand = 5, .double_operand = 2.0};

  printf("%d\n", operand.int_operand);  //0
  printf("%f\n", operand.double_operand); //2.000000
  return 0;
}