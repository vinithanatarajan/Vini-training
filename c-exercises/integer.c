#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number\n");
  scanf("%d", &a);
  if(a < 0){
    printf("Enter a non negative number\n");
  }
  return 0;
}