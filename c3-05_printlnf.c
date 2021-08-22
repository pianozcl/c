
#include <stdio.h>
#include <stdarg.h>
void println(const char* format, ...) {
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  printf("\n");
  va_end(args);
}

#define PRINTLN(format, ...) printf(format"\n", ##__VA_ARGS__)
#define PRINT_INT(value) PRINTLN(#value);
int main() {
  println("hello %d", 2);
  PRINTLN("hello %d", 2);
  PRINTLN("hello");

  PRINT_INT(5);
  PRINT_INT(3 + 2); //3 + 2
}