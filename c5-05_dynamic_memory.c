
#include <stdio.h>
#include <stdlib.h>

#define LEN 10

void initPointer(int **p, int len, int default_value) {
  *p = malloc(sizeof(int) * len);
  for (int i = 0; i < len; i++) {
    (*p)[i] = default_value;
  }
}

int main() {
  //函数调用栈分配的变量，函数调用后就会释放
  //malloc从堆内存动态分配内存，不会随着函数调用结束而释放，需调用free手动释放内存
  int *arr = malloc(sizeof(int) * LEN);
  for (int i = 0; i < LEN; i++) {
    arr[i] = i;
  }

  for (int i = 0; i < LEN; i++) {
    printf("%d\n", arr[i]);
  }
  free(arr);

  //传递指针，要传递指针的地址。因为指针和变量一样，在函数传递时会拷贝副本。因此需直接传递指针的地址。如下初始化数组p_arr的方式
  int *p_arr;
  initPointer(&p_arr, LEN, 0);
  for (int i = 0; i < LEN; i++) {
    printf("%d\n", p_arr[i]);
  }

  //数组动态扩容
  p_arr = realloc(p_arr, LEN * 2 * sizeof(int));

}