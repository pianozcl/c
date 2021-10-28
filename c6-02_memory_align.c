
/**
 * 尽管内存是以字节为单位，但是大部分处理器并不是按字节块来存取内存的.它一般会以双字节,四字节,8字节,16字节甚至32字节为单位来存取内存
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#pragma pack(2)   //编译器对内存对齐的优化，对齐为2的倍数
int main() {
  //内存对齐避免浪费内存，相同长度的类型放到一起
  typedef struct Person {
    char *name;
    int age;
    char *id;
  } Person;

  /**
   * a6 9f 6d 09   01 00 00 00   00 00 00 00   00 00 00 00   │ ··m············· │
     a6 9f 6d 09   01 00 00 00
   */
  Person p = {.name = "123123123", .id = "123123123"};


  typedef struct Align {
    char *a;
    char *b;
    //__attribute((aligned(2))) int c; //对齐到2的倍数
    _Alignas(16) int c;
  } Align;
  struct Align align = {};
  return 0;
}