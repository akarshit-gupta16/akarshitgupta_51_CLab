//FIBONACCI SEQUENCE USING FOR LOOP
// Writted by -- Akarshit Gupta
// 2-04-2021


//FIBONACCI SEQUENCE = each number is the sum of the two preceding ones, starting from 0 and 1. 

#include <stdio.h> //Pre-Process directive to include standard input output functions header file. 
int main() { // Main function body starting.

	// Here, t1 is 1st term and t2 is 2nd term
    int i, n, t1 = 0, t2 = 1, nextTerm; //Variable declaration of integer data type.
    printf("Enter the number of terms: ");
    scanf("%d", &n); //Taking number as a input from the user
    printf("Fibonacci Series: "); 

    for (i = 1; i <= n; ++i) { 
        printf("%d, ", t1); // Printing t1 that is equal to 0
        nextTerm = t1 + t2; // nextTerm is t1 + t2 that is equal to (0 + 1)=1

        //for doing the sum of next two preceding ones
        t1 = t2;  // Now here, t1 becomes t2
        t2 = nextTerm; // and t2 becomes nextTerm
    }

    return 0;

}