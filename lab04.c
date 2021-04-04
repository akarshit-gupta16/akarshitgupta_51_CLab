/ DISTANCE BETWEEN TWO POINTS IN A PLANE
// Written by -- Akarshit Gupta
//2-04-2021

#include<stdio.h>  //Pre Process Directive to include standard input output functions header file. 
#include<math.h>   //Pre Process Directive to include math input output functions header file.
  
int main() //Main function body starting..
{  
    float x1, y1; //variable declaration of first point A(x1 , y1)
    float x2, y2; //variable declaration of second point B(x2 , y2)
    float distance;//variable declaration of distance between two ponts of float data type
  
    printf("Enter point 1 (x1, y1)\n");  
    scanf("%f %f", &x1, &y1);  // taking x1 and y1 as a input from the user
  
    printf("Enter point 2 (x2, y2)\n");  
    scanf("%f %f", &x2, &y2);  // taking x2 and y2 as a input from the user
  	
  	//Distance Formula
    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ); 
  	
  	//Printing distance between two points
    printf("Distance between (%f, %f) and (%f, %f) is %f\n", x1, y1, x2, y2, distance);  
  
    return 0;  //return function of standard library

    
}  //main function body ends