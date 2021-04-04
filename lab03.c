// AREA AND PERIMETER OF CIRCLE, SQUARE AND RECTANGLE
// Written by -- Akarshit Gupta
// 2-04-2021

#include <stdio.h> //Standard input output library
int main(){   //Main function body starting
	//variable declaration of dimensions of square,rectangle and circle of int data type
	int side_of_square;
	int length_of_rectangle, breadth_of_rectangle;
	int radius_of_circle;

	//variable declaration of area and perimeter of square and rectangle of int data type
	int area_of_square, area_of_rectangle, perimeter_of_square, perimeter_of_rectangle;

	//variable declaration of area of circle of float data type
	float area_of_circle, perimeter_of_circle;       

	//Assigning values to the declared variables
	radius_of_circle=3;
	side_of_square=4;
	length_of_rectangle=5;
	breadth_of_rectangle=2;
	area_of_circle=3.14*(radius_of_circle*radius_of_circle);
	perimeter_of_circle=2*3.14*(radius_of_circle);
	area_of_square=side_of_square*side_of_square;
	perimeter_of_square=4*(side_of_square);
	area_of_rectangle=length_of_rectangle*breadth_of_rectangle;
	perimeter_of_rectangle=2*(length_of_rectangle+breadth_of_rectangle);

	//Printing the value of area of circle
	printf("Area of Circle=%f\n",area_of_circle);

	//Printing circumfrence of circle 
	printf("Circumfrence of Circle=%f\n",perimeter_of_circle); 

	//Printing area of square  
	printf("Area of Square=%d\n",area_of_square);  

	//Printing perimeter of square
	printf("Perimeter of Square=%d\n",perimeter_of_square); 

	//Printing area of rectangle
	printf("Area of Rectangle=%d\n",area_of_rectangle);  

	//Printing perimeter of rectangle
	printf("Perimeter of Rectangle=%d\n",perimeter_of_rectangle);  
return 0;
} 