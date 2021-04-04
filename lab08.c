//FACTORIAL USING FOR LOOP
//Writted by -- Akarshit Gupta
//2-04-2021

#include<stdio.h> //Pre-Process directive to include input output header file.  
int main() {    // Main function body starting..

	int i,fact=1,number;  // Variable declaration of integer data type.  
	printf("Enter a number: ");    
	scanf("%d",&number); //Taking Number as a input from the user.

    for(i=1;i<=number;i++) // For loop at the increament of 1
    { 
    	fact=fact*i;    
 	}    
	printf("Factorial of %d is: %d",number,fact); // Printing Number and it's Factorial
return 0;  

}   //main function body ends