#include <stdio.h>
#include <string.h>

struct Persons {
  char name[20];
  int age;
  char dob[20];
};

void printPerson( struct Persons person );

int main(){
  struct Persons Person1;
  struct Persons Person2;

  strcpy(Person1.name, "Alan");
  Person1.age = 36;
  strcpy(Person1.dob, "20 Nov 1981");

  strcpy(Person2.name, "Jake");
  Person2.age = 35;
  strcpy(Person2.dob, "20 Dec 1980");

  printPerson( Person1 );
  printPerson( Person2 );

  return 0;
}

void printPerson( struct Persons person ) {
  printf( "Person name : %s\n", person.name);
  printf( "Person age : %d\n", person.age);
  printf( "Person dob : %s\n", person.dob);
}
