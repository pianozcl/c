
#include <stdio.h>
#include <stdarg.h>

void sumIntArrays(int rows, int cols, int arr[][cols], int res[]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      res[i] += arr[i][j];
    }
  }
}

int main() {
  int arr[2][3] = {{1,2,3}, {4,5,6}};
  int res[2];
  sumIntArrays(2, 3, arr, res);

  for (int i = 0; i < 2; i++) {
    printf("%d\n", res[i]);
  }
}