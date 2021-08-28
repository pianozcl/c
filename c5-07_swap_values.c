
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swapInt(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap(void *a, void *b, size_t size) {
  void *temp = malloc(size);
  if (temp) {
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
  }
}

#define SWAP(a, b) {typeof(a) temp = a; a = b; b = temp;}
int main() {
  double x = 3.0;
  double y = 4.0;
  //swapInt(&x, &y);
  swap(&x, &y, sizeof(double));
  printf("%f\n", x);
  printf("%f\n", y);

  SWAP(x, y);
  printf("%f\n", x);
  printf("%f\n", y);
}