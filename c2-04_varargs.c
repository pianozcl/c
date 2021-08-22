//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <stdarg.h>
void handleVarargs(int arg_count, ...) {
  //获取变长参数列表
  va_list args;

  //遍历
  va_start(args, arg_count);
  for (int i = 0; i < arg_count; i++) {
    //取出对应参数
    int arg = va_arg(args, int);
    printf("%d: %d\n", i, arg);
  }

  //结束遍历
  va_end(args);
}

int main() {  //function scope
  handleVarargs(5, 1, 2, 3, 4, 5);
}



