//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <stdbool.h>
//c函数为空，代表可以接受任意个参数

void emptyParam();  //声明函数

//void不接受任何参数
void zeroParam(void) {
  puts("zero");
}

int add(int i, int j);

int main() {
  emptyParam();
  emptyParam(1);
  emptyParam(1, "2");
  zeroParam();

  //add(1, 1);
  return 0;
}

void emptyParam() {
  puts("hello");
}
