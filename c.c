#include <stdio.h>
int main(void)
{
  double arr[] = {12.4, 123.6, 12.5};
  double *p = arr;
  printf("%lf", *p++);
  return 0;
}