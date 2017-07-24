// pointers in c are used to access the memory and manipulater the address
// var is a variable in the program, &var will give you its address in the memory
// & reference operator, it gives you the address of the variable
// a dereference operator gives you the value from the address

// #include <stdio.h>
// int main()
// {
//   int var = 5;
//   printf("Value: %d\n", var);
//   printf("Address: %u", &var);
//   return 0;
// }

#include <stdio.h>
int main()
{
  int* pc;
  int c;
  c = 5;

  printf("Address of c: %d\n", &c);
  printf("Value of c: %d\n", c);

  pc = &c;
  printf("Address of pc: %d\n", &pc);
  printf("Content of pc: %d\n", *pc);

  c=11;
  printf("Address of pointer pc: %d\n", &pc);
  printf("Content of pointer pc: %d\n", *pc);

  *pc=2;
  printf("Address of c: %u\n", &c);
  printf("Value of c: %d\n", c);

}