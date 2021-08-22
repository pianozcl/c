
#include <stdio.h>
#include <stdarg.h>
#define ARRAY_SIZE 10
int main() {
  //c字符串跟数组的不同之处在于，字符串以\0结尾。如下hello world其实是12个字符，因为末尾隐藏\0
  char str[12] = "hello world";
  printf("%s", str);

  char str_zh[] = "你好，世界";  //对于中文，不同的编译器编译的数组内容不一样

  return 0;
}