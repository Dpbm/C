#include <stdio.h>
#include "simplemath.h"

int main(){
  int total_p = plus(10, 3);
  int total_m = minus(10, 3);
  int total_u = mult(10, 3);
  float total_d = div(10, 3);

  printf("total_p: %d\n", total_p);
  printf("total_m: %d\n", total_m);
  printf("total_u: %d\n", total_u);
  printf("total_d: %f\n", total_d);

  return 0;
}
