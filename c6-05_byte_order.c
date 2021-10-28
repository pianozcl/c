
#include <stdio.h>


/**
 * 01 02 03 04
 * 04 03 02 01 小端序
 * 01 02 03 04 大端序
 * @return
 */
int isBigEndian() {
  union {
    char c[2];
    short s;
  } value = {.s = 0x0100};

  return value.c[0] == 1;   //返回0代表是小端序，返回1代表大端序
}

/**
 * 切换端序
 * @param origin
 * @return
 */
int toggleEndian(int origin) {
  union {
    char c[4];
    int i;
  } value = {.i = origin};
  char temp = value.c[0];
  value.c[0] = value.c[3];
  value.c[3] = temp;
  temp = value.c[1];
  value.c[1] = value.c[2];
  value.c[2] = temp;
  return value.i;
}

/**
 * 切换端序指针版本
 * @param origin
 * @return
 */
int toggleEndianWithPointer(int origin) {
  char *p = &origin;
  char temp = p[0];
  p[0] = p[3];
  p[3] = temp;
  temp = p[1];
  p[1] = p[2];
  p[2] = temp;
  return origin;
}

int main() {
  printf("%d\n", isBigEndian());

  printf("%x\n", toggleEndian(0x12345678));   //78563412

  printf("%x\n", toggleEndianWithPointer(0x12345678));  //78563412
}