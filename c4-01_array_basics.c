
#include <stdio.h>
#include <stdarg.h>
#define ARRAY_SIZE 10
int main() {
  int arr[ARRAY_SIZE];

  for (int i = 0; i < ARRAY_SIZE; i++) {
    arr[i] = i;
  }

  int arr_2[3] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 3; i++) {
    printf("%d\n", arr_2[i]); // 1 2 3
  }

  //C99
  char char_arr[5] = {[2] = 'l', 'l', 'o'}; //从第三个元素开始初始化，未初始化的下标为null
  for (int i = 0; i < 5; i++) {
    printf("%c ", char_arr[i]); //    l l o
  }
}