#include <stdio.h>
#include <stdlib.h>

typedef struct ints {
  int anint;
  int anotherint;
  struct ints* next;
} ints;

void printnode(ints* thing){
  printf("printnode %d %d\n", thing->anint, thing->anotherint);

}

void printlist(ints* alist){
  printf("\nPrinting a list:\n");
  ints * current = alist;

  while (current != NULL) {
      printnode(current);
      current = current->next;
  }
}

ints * add_node(ints * head, int anint, int anotherint) {
    ints * current = head;

    if(head == NULL){
      head = malloc(sizeof(ints));
      head->anint = anint;
      head->anotherint = anotherint;
      head->next = NULL;
    } else {
      while (current->next != NULL) {
          current = current->next;
      }

      current->next = malloc(sizeof(ints));
      current->next->anint = anint;
      current->next->anotherint = anotherint;
      current->next->next = NULL;
    }

    return head;
}

ints * reverse_list(ints* head){
  ints * new_head = 0;
  while (head) {
    ints * next = head->next;
    head->next = new_head;
    new_head = head;
    head = next;
  }

  return new_head;
}

int main(){
  ints* all_of_my_ints = NULL;

  all_of_my_ints = add_node(all_of_my_ints ,1,2);

  printlist(all_of_my_ints);

  all_of_my_ints = add_node(all_of_my_ints ,1,2);
  all_of_my_ints = add_node(all_of_my_ints ,3,4);
  all_of_my_ints = add_node(all_of_my_ints ,5,6);
  all_of_my_ints = add_node(all_of_my_ints ,7,8);

  printlist(all_of_my_ints);

  all_of_my_ints = reverse_list(all_of_my_ints);
  printlist(all_of_my_ints);

  return 0;
}
