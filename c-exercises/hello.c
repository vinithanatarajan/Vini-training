#include <stdio.h>

int main( )
{
  int a, b, total;
  // char c;
  printf("Enter two numbers  " );
  scanf("%d %d", &a, &b);
  if(a && b  < 0)
  {
    printf("please enter a non negative number\n");
  }

  else {
    total=a+b;
    printf("your result is %d\n", total);
  }
  return 0;
}