//Maximum of 3 numbers using for loop
//Writted by -- Akarshit Gupta
//30-03-2021


#include<stdio.h> //Pre-Process directive to include standard input output header file.
  
int main()   //main function body starting.
{  
    int limit, num, count , large; // Variable declaration of integer data type.
  

    printf("Enter %d numbers\n", limit);  
    for(count = 1; count <= 3; count++) //For loop at the increatment of 1.
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