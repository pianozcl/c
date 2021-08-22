//
// Created by 晨亮   周 on 2021/8/16.
//

#include <stdio.h>


/*
 * #ifdef 如果定义了
 * #ifndef 如果没有定义
 * #if 如果
 *
 * #if defined(MACRO) ==> #ifdef MARCO
 */

/**
 * 条件编译，控制日志信息是否输出
 * 还常用于兼容性处理（例如针对不同C版本）
 */
#define DEBUG
void dump(char *message) {
#ifdef DEBUG
  puts(message);
#endif
}
int main() {
  dump("main start\n");

  printf("hello world\n");

  dump("main end\n");

  //打印当前C版本
  printf("VERSION %d\n", __STDC_VERSION__);   //201112      C11版本

#if __STDC_VERSION__ == 199901
  puts("C99");
#elif __STDC_VERSION__ == 201112
  puts("C11");
#else
  puts("?");
#endif
  return 0;
}



