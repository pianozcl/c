
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  struct Person {
    char *name;
    int age;
  };

  struct Person person = {"zcl", 11};
  person.age = 30;
  printf("%d\n", person.age);

  struct Person *person_ptr = &person;
  printf("%s\n", person_ptr->name); //指针访问用->

  printf("%d\n", sizeof(struct Person));  //16个字节

  //用typedef为Person结构体起别名
  typedef struct Person Person;
  Person p = {"haha", 11};
  printf("%d\n", p.age);

  //或者在定义结构的同事，通过typedef修饰
//  typedef struct Person {
//    char *name;
//    int age;
//  } Person;

  struct {
    char *name;
    int age;
  }anonymous_person;

  typedef struct Out {
    char *out;

    Person *person;
    struct {
      char *in;
    } In;
  } Out;
  Out o = {"haha", &person};
  printf("%d\n", o.person->age);

  return 0;
}