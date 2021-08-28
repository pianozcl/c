
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void shuffleArray(int arr[], int len) {
  srand(time(NULL));
  for (int i = len - 1; i > 0; i--) {
    int random_num = rand() % i;
    swap(arr, i, random_num);
  }
}

int main() {
  int arr[30];
  for (int i = 0; i < 30; i++) {
    arr[i] = i;
  }
  shuffleArray(arr, 30);
  for (int i = 0; i < 30; i++) {
    printf("%d\n", arr[i]);
  }
}