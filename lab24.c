// Swapping of two numbers using  call by value 
// Written by -- Akarshit Gupta
// 3-04-2021


#include <stdio.h> //Pre-Process directive to include input output functions header file.

void swap(int, int);

int main()
{
   int x, y;

   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
  // the values befor swapping
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   swap(x, y); // Swap function

  // the values after swappimg
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
   return 0;
}

void swap(int a, int b)
{
   int temp;

   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b);
} 