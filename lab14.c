//To find Maximum element and index in array
//Writted by -- Akarshit Gupta
//2-04-2021

#include<stdio.h>//Pre-Process directive to include standard input output functions header file
int main()//main function body starting
{
	int i; //variable declaration of integer data type
	float arr[7]; //Array declaration

	printf("Please enter seven numbers:\n "); //printing statement

	for (i = 0; i < 7; ++i) //for loop
		{
    	scanf("%f", &arr[i]); //taking 7 elements of Array as a input from the user 
		}

	for (i = 1; i < 7 ; ++i) //for loop
		{
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	// Printinng the Largest element in the array
	printf("Largest element = %.2f", arr[0]);

	return 0;
} 