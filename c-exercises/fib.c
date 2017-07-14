#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int a, b, c, i, n;
   // int *ptr;


   if(argc == 1){
     printf("please enter an integer");
     return 0;
   }

   n = atoi(argv[1]);
   printf("Calculating fibonacci to %d integers \n",n);
   int num_array[n];

   // ptr = num_array;

   num_array[0] = 0;
   num_array[1] = 1;

   for(i = 2; i < n; i++) {
      num_array[i] = num_array[i-1] + num_array[i-2];
   }

   for(i=0; i <n; i++){

    printf("The result is  %d \n", num_array[i]);

   }

   printf("\nDone calulating fibonacci to %d integers \n",n);

   return 0;
}
