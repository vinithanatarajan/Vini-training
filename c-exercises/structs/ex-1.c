//Make a struct to represent a person's name, age and date of birth.

#include <stdio.h>
#include <string.h>

struct Persons {
  char name[20];
  int age;
  char dob[20];
  struct Persons *next = null;
};

int main() {
  struct Persons Person1;
  struct Persons Person2;
  struct Persons *p = Person1;
  struct Persons *p2 = Person2;

  strcpy(Person1.name, "Alan");
  Person1.age = 36;
  strcpy(Person1.dob, "20 Nov 1981");

  strcpy(Person2.name, "Jake");
  Person2.age = 35;
  strcpy(Person2.dob, "20 Dec 1980");

  printf( "Person 1 name : %s\n", Person1.name);
  printf( "Person 1 age : %d\n", Person1.age);
  printf( "Person 1 dob : %s\n", Person1.dob);

  printf( "Person 2 name : %s\n", Person2.name);
  printf( "Person 2 age : %d\n", Person2.age);
  printf( "Person 2 dob : %s\n", Person2.dob);


  return 0;

}