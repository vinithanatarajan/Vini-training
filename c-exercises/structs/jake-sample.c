#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct people {
  char name[12];
  int age;
  struct people* next;
} people;



// LINKED LIST FUNCTIONS
void printnode(people* thing){
  printf("%s\n", thing->name);

}

void printlist(people* alist){
  if(alist == NULL){
    printf("-- no entries in list\n");
  } else {
    people* current = alist;

    while (current != NULL) {
        printf("-- ");
        printnode(current);
        current = current->next;
    }
  }
}

people* add_node_to_list(people* head, char name[12]) {
  people* current = head;

  if(head == NULL){
    head = malloc(sizeof(people));
    strcpy(head->name, name);
    head->next = NULL;
  } else {
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = malloc(sizeof(people));
    strcpy(current->next->name, name);
    current->next->next = NULL;
  }

  return head;
}

people* reverse_list(people* head){
  people* prevnode = NULL;
  people* curnode = head;
  people* nextnode = NULL;

  while (curnode != NULL) {
    nextnode = curnode->next;
    curnode->next = prevnode;
    prevnode = curnode;
    curnode = nextnode;
  }

  return prevnode;
}


// HASHMAP FUNCTIONS
int hashfunction(char aword[12]){
  return ((int)tolower(aword[0])) -97;
}

void addperson(people* mypeeps[26], char name[12]){

  int nameinitial = hashfunction(name);

  mypeeps[nameinitial] = add_node_to_list(mypeeps[nameinitial] ,name);
}

void printhashmap(people* mypeeps[26]){
  for(int i=0; i<26; i++){
    printf("\nPrinting '%c' list:\n", (char) (i + 97));
    printlist(mypeeps[i]);
  }
}

bool find_name_in_linkedlist(people* head, char name[12]){
  people* current = head;

  while (current != NULL) {
    if(strcmp(current->name, name) == 0){
      return true;
    }
    current = current->next;
  }

  return false;
}

bool find_name_in_hashmap(people* mypeeps[26], char name[12]){
  int nameinitial = hashfunction(name);

  if(find_name_in_linkedlist(mypeeps[nameinitial] ,name)){
    return true;
  }

  return false;
}

int main(){
  // fancy new hashmap
  printf("-----------\n");
  printf(" A Hashmap \n");
  printf("-----------\n");

  people* name_of_people[26];

  // init array
  for(int i=0; i<26; i++){
    name_of_people[i] = NULL;
  }

  addperson(name_of_people,"jake");
  addperson(name_of_people,"jess");
  addperson(name_of_people,"John");
  addperson(name_of_people,"july");
  addperson(name_of_people,"Vini");
  addperson(name_of_people,"veronica");

  printhashmap(name_of_people);

  // boring old linked list
  printf("\n");
  printf("---------------\n");
  printf(" A Linked List \n");
  printf("---------------\n");

  people* somepeople = NULL;

  somepeople = add_node_to_list(somepeople ,"jake");
  somepeople = add_node_to_list(somepeople ,"jess");
  somepeople = add_node_to_list(somepeople ,"John");
  somepeople = add_node_to_list(somepeople ,"july");
  somepeople = add_node_to_list(somepeople ,"Vini");
  somepeople = add_node_to_list(somepeople ,"veronica");

  printlist(somepeople);

  printf("\n");
  printf("---------------\n");
  printf(" Look for Vini \n");
  printf("---------------\n");

  if(find_name_in_linkedlist(somepeople ,"Vini")){
    printf("Vini is in the list\n");
  }

  if(find_name_in_hashmap(name_of_people ,"Vini")){
    printf("Vini is in the hash\n");
  }


  return 0;
}