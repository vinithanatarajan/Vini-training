#include<stdio.h>

int main(){

  int count[6]={},i,j;
  char a[6]="Hello.";

  while(a[i]!='\0'){
    count[i]=a[i]; i++;
  }
  for(j = 0; j < i-1; j++){
   printf("%d ",count[j]);
  }
  return 0;
}

// #include <stdio.h>
// #include <stdlib.h>//atoi

// int main(int argc, char *argv[]){

//   printf("int %lu \n",sizeof(int));
//   printf("char %lu \n",sizeof(char));

// }

