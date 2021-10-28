
#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode {
  int value;
  struct ListNode *next;
} ListNode;

ListNode *create(int value) {
  ListNode *node = malloc(sizeof(ListNode));
  if (!node) exit(1);
  node->value = value;
  node->next = NULL;
  return node;
}

/**
 * 释放内存后，应将指针置为NULL。因为被释放的内存是不确定的，避免误用指针产生的风险
 *
 * 指针作为函数参数，跟普通变量一样，传递参数会拷贝一个副本，尽管实参和形参都是地址的值一样，但是占用不同的内存块（拷贝后相当于两个指针）。
 * 因此，想要在函数内部将指针置NULL，那参数需要传递指针的地址，也就是指针的指针
 *
 * @param p
 */
void destroy(ListNode **p) {
  (*p)->next = NULL;    //指针
  free(*p);
  *p = NULL;
}

int main() {
  ListNode *node = create(100);
  //destroy(&node);


  node->next = create(200);
  printf("%x\n", node); //6cc00670
  printf("%d\n", *node);  //100
  printf("%d\n", (*node).value);//100
  printf("%d\n", node->value);//100

  printf("%x\n", (*node).next); //6cc00680
  printf("%x\n", node->next);   //6cc00680
  printf("%d\n", (*node).next->value);    //200     ->和.的区别是 ->为指针操作，.指针解因用（指针指向的值）操作
  printf("%d\n", (*((*node).next)).value);//200
  printf("%d\n", (node->next)->value);//200
  return 0;
}