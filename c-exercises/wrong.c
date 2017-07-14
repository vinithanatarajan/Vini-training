#include <stdio.h>

int main()
{
  char wrong[5];
  wrong[0] = 97;
  wrong[1] = 98;
  wrong[2] = 99;
  wrong[3] = 100;
  wrong[4] = 101;

  printf("%d", wrong[6]);

  return 0;

}