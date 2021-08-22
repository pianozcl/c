//
// Created by 晨亮   周 on 2021/8/16.
//
#include <stdio.h>

unsigned int factorial(unsigned int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

/**
 * 在经典汉诺塔问题中，有 3 根柱子及 N 个不同大小的穿孔圆盘，盘子可以滑入任意一根柱子。一开始，所有盘子自上而下按升序依次套在第一根柱子上(即每一个盘子只能放在更大的盘子上面)。移动圆盘时受到以下限制:
 *   (1) 每次只能移动一个盘子;
 *   (2) 盘子只能从柱子顶端滑出移到下一根柱子;
 *   (3) 盘子只能叠在比它大的盘子上。
 */
void hanoi(int n, char src, char dest, char tmp) {
  if (n == 0) {
    return;
  } else if (n == 1) {
    printf("%c -----> %c\n", src, dest);
  } else {
    hanoi(n - 1, src, tmp, dest);
    hanoi(1, src, dest, tmp);
    hanoi(n - 1, tmp, dest, src);
  }
}

int main() {
  int i = factorial(3);
  printf("%d\n", i);

  hanoi(3, 'A', 'B', 'C');
}



