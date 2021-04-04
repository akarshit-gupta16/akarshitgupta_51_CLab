//Program: Arithmetic operations using addition, subtraction, multiplication and remainder operator
//Date of creation: 30-03-2021
//Author: Akarshit Gupta
#include<stdio.h>//preprocessor directive for standard input output
int main()//int main means that are functon needs to return some integer value
{	
	int number1, number2, sum, subtract, product;//variable declaration of integer data type
	float remainder;//variable declaration of float data type
	scanf("%d %d", &number1, &number2);//taking two numbers as input from user
	sum=number1+number2;//operator to add two numbers
	subtract=number1-number2;//operator to subtract two numbers
	product=number1*number2;//operator to multiply two numbers
	remainder=number1%number2;//operator for modulus of two numbers
	printf("sum of two numbers=%d\n",sum);//Printing the sum of two numbers
	printf("difference of two numbers=%d\n",subtract);//Printing the difference of two numbers
	printf("product of two numbers=%d\n",product);//Printing the product of two numbers
	printf("remainder of two numbers=%f\n",remainder);//Printing modulus the sum of two numbers
return 0;//return 0 means success
}
