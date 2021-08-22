//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <stdbool.h>

void change(int i) {
  i = 100;
}
int main() {
  int i = 10;
  change(i);
  printf("%d\n", i);  //10
}
