//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>
#include <limits.h>
int main() {
  char a = 'a';
  char char_1 = '1';
  char char_1_escape = '\61'; //八进制：转义后的，同上
  char char_0 = '0';
  char i = 0;
  char newLine = '\n';

  // \n newline
  // \b backspace
  // \r return
  // \t table
  // \' 字符字面量
  // \" 字符串字面量
  printf("char a: %d\n", a);  //char a: 97
  printf("char_1: %d\n", char_1); //char_1: 49
  printf("char_1: %d\n", char_1_escape);  //char_1: 49
  printf("char_0: %d\n");
  printf("i: %d\n", i); //i: 0
  printf("%c", char_1); //1


  return 0;
}
