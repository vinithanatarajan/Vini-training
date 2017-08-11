// build a linked list that holds ages and names
// with functions that take a linked list and appends new nodes to it
// and a function that prints the list
// then, make an array 26 wide of linked list pointers
// use the hash function
//int hashfunction(char aword[12]){
//return ((int)tolower(aword[0])) -97;
//} to decide where in the array a name should go - which linked list the name should be appended to
// and append it!
// so, 'adam' would go in the linked list at position 0 of the array
// 'bob' in the second position
// 'vini' in the 21st
//make element to hashmap function make node inside it.(have to do)
// find the people with name Chris(have to do)
// find the people who are aged above 30(have to do)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct people {
  char name[10];
  int age;
  struct people* next;
}people;

void addNode(people* list){
  printf("printing name and age %s %d\n", list->name, list->age);
}

void printpeople(people* ppeople){
  printf("\nPrinting people:\n");
  people * current = ppeople;

  while (current != NULL) {
    addNode(current);
    current = current->next;
  }
}

people * add_node(people * head, char name[10], int age) {
  people * current = head;
  if(head == NULL){
      head = malloc(sizeof(people));
      strcpy(head->name, name);
      head->age = age;
      head->next = NULL;
    } else {
      while (current->next != NULL) {
          current = current->next;
      }

      current->next = malloc(sizeof(people));
      strcpy(current->next->name, name);
      current->next->age = age;
      current->next->next = NULL;
    }

    return head;
}

int hashfunction(char aword[12]){
  return ((int)tolower(aword[0])) -97;
}

int main() {
  int n;
  people* list_of_pointers[26];
  people* all_people = NULL;
  for(n = 0; n < 26; n++){
    list_of_pointers[n] = NULL;
  }
  list_of_pointers[hashfunction("Aron")] = add_node(list_of_pointers[hashfunction("Aron")], "Aron", 30);
  list_of_pointers[hashfunction("Bob")] = add_node(list_of_pointers[hashfunction("Bob")],"Bob", 31);
  list_of_pointers[hashfunction("Chris")] = add_node(list_of_pointers[hashfunction("Chris")],"Chris", 32);
  list_of_pointers[hashfunction("Chris")] = add_node(list_of_pointers[hashfunction("Chris")],"Chris", 32);

  list_of_pointers[hashfunction("Caleb")] = add_node(list_of_pointers[hashfunction("Caleb")],"Caleb", 32);



  list_of_pointers[hashfunction("Vini")] = add_node(list_of_pointers[hashfunction("Vini")],"Vini", 32);


  for(n = 0; n < 26; n++){
  printpeople(list_of_pointers[n]);
  }
  return 0;
}

