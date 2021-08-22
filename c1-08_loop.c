//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <stdbool.h>
int main() {
  int i;
  while (0) {
    scanf("%d", &i);
    printf("%d\n", i);
  }

  for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  int num = 10;
  begin:                  //标签：可以任意命名
  printf("%d\n", num);
  if (num++ < 15) {
    goto begin;
  }
}
