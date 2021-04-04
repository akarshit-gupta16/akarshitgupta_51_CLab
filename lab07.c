//Area of Circle, Square and Rectangle based on user choice
//writted by -- Akarshit Gupta
//2-04-2021


#include <stdio.h>  //Pre-process directive to include standard input output functions header file.
int main () //Main function body starting.
{
      int choice,r,l,w,s; //variable declaration of integer data type.
      float area; // variable declaration of float data type
      printf("Input 1 for area of circle\n");
      printf("Input 2 for area of rectangle\n");
      printf("Input 3 for area of square\n");

      printf("Input your choice : ");
      scanf("%d",&choice); // taking choice(1 to 3) as a input from the user. 
      switch(choice) 
      {
           //Area of circle
           case 1: 
                 printf("Input radious of the circle : ");
                 scanf("%d",&r); //taking radius as a input from the user.
                 area=3.14*r*r;  // formula of area of circle.
                 break;
            //Area of Rectangle
            case 2:
                  printf("Input length and width of the rectangle : "); 
                  scanf("%d%d",&l,&w);//taking length and breadth as a input from the user.
                  area=l*w; //formula of area of rectangle.
                  break;
            //Area of Square
            case 3:
                  printf("Input the side of the square : ");
                  scanf("%d",&s);//taking side of square as a input from the user.
                  area=.5*s*s; //formula of area of square.
                  break;
          }
          printf("The area is : %f\n",area); // Printing the area according to the user's choice
          return 0;
}