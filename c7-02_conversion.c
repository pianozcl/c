
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
  printf("%d\n", atoi("123"));    //字符串转整数函数  123
  printf("%d\n", atoi("123asd")); //123
  printf("%d\n", atoi("0x10")); //0

  printf("%f\n", atof("12.23"));  //12.230000
  printf("%f\n", atof("-12e34")); //-120000000000000007304085773727301632.000000
  printf("%f\n", atof("12.23asd")); //12.230000
  printf("%f\n", atof("0x10")); //16.000000
}