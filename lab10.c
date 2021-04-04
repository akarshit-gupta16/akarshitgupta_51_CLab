//Maximum of n numbers using for loop
//Writted by -- Akarshit Gupta
//2-04-2021


#include<stdio.h> //Pre-Process directive to include standard input output functions header file.

int main()   //main function body starting.
{  
    int limit, num, count , large; // Variable declaration of integer data type.

    printf("Enter the limit\n"); 
    scanf("%d", &limit);  //taking input from the user that, how many numbers will you enter.

    printf("Enter %d numbers\n", limit);  
    for(count = 1; count <= limit; count++) //For loop at the increatment of 1.
    {  
        scanf("%d", &num);  //Taking Numbers input from the user.
        if(num > large || count == 1)  //checking whether num is greater than large.
        {  
            large = num; //if the condition is true, then that num will become the largest number.
        }  
    }  
  	//Printing the largest number among n numbers.
    printf("largest number is %d\n", large);

    return 0;  
}   