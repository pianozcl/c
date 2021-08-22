
#include <stdio.h>
#include <stdarg.h>

//数组作为参数，传递的只是数组的首地址，并不知道数组长度，因此通常还要单独传数组的长度
int sum(int arr[], int len) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    count += arr[i];
  }
  return count;
}


int main() {
  int arr[] = {1,2,3,4,5};
  printf("%d", sum(arr, 5));
}