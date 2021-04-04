//Sorting an array using insertion sort
//Writted by -- Akarshit Gupta
//2-04-2021

#include<stdio.h> //Pre-Process directive to include standard input output functions header file
int main(){ // main function body starting

   /* Here i & j for loop counters, temp for swapping,
    * count for total number of elements, number[] to
    * store the input numbers in array. You can increase
    * or decrease the size of number array as per requirement
    */

   int i, j, count, temp, number[25]; //Variable declaration of integer data type

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&count); //taking input from the user

   printf("Enter %d elements: ", count);
   // This loop would store the input numbers in array
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   // Implementation of insertion sort algorithm
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0; //Return function of standard library

} //main function body ends 