//To read and print elements in two dimensional array
//Writted by -- Akarshit Gupta
//2-04-2021

#include<stdio.h> //Pre-Process directive to include standard input output functions header file
int main(){ // main function body starting
   //2D array declaration
   int disp[2][3];

   //Counter variables declaration for the loop
   int i, j;

   for(i=0; i<2; i++) { //Nested for loop
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j); 
         scanf("%d", &disp[i][j]); // taking input from the user

      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) { // Nested for loop
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;

} //main function body ends