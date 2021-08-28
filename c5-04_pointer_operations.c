
#include <stdio.h>

int main() {
  int a = 2;
  int *p = &a;

  //以下打印结果表明，指针移动跟该指针指向类型有关。例如int 4字节，则p + 1等于加4个字节
  printf("%d\n", p);  //-311179604
  printf("%d\n", p + 1);  //-311179600
  printf("%d\n", sizeof(int));  //4

  {
    int arr[] = {3,4,6,7,8};
    int *p = arr;
    printf("%d\n", *(p + 3)); //7
    printf("%d\n", arr[3]); //等价于上面指针操作
    printf("%d\n", *(arr + 3)); //7
  }
}