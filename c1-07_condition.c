//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <stdbool.h>
int main() {
  _Bool is_enabled = true;    //c99的布尔类型，本质上还是宏定义
  bool is_true = true;

  //三元运算
  int b = is_enabled ? 1 : 0;
  printf("%d\n", b);

  //switch
  int opt;
  scanf("%d", &opt);
  switch (opt) {
    case 1:
      printf("111");
      break;
    case 2:
      printf("222");
      break;
    default:printf("333");
  }
}
