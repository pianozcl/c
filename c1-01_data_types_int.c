//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <limits.h>
int main() {
  short short_int= 0;
  int i = 0;
  long long_int = 0;

  // %d decimal
  // x = hex 16进制
  // o = oct 8进制
  //\n: new line
  //%ld long decimal
  // %lld long long decimal
  //数据类型长度跟编译器有关
  printf("short : %d\n", sizeof(short));    //short : 2
  printf("int : %d\n", sizeof(int));        //int : 4
  printf("long : %d\n", sizeof(long));      //long : 8
  printf("long long : %d\n", sizeof(long long));  //long long : 8

  printf("max int %d, min int %d\n", INT_MAX, INT_MIN); //max int 2147483647, min int -2147483648
  printf("max long %ld, min int %ld\n", LONG_MAX, LONG_MIN);  //max long 9223372036854775807, min int -9223372036854775808

  //%u打印无符号整形
  printf("unsigned max %u, unsigned min %d\n", UINT_MAX, 0);  //unsigned max 4294967295, unsigned min 0

  size_t size_of_int = sizeof(int);
  printf("%d", size_of_int);    //4
  return 0;
}
