#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  /* Alternative solution using pointer arithmetic */
  *((p - 10) + 12) = 98;

  printf("a[2] = %d\n", a[2]);  /* This will print 98 */
  return 0;
}
