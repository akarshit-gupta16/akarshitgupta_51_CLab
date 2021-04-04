//To demonstrate the use of various string operations
//Writted by -- Akarshit Gupta
//2-04-2021


#include <stdio.h> //Pre-Process directive to include standard input output header file
#include <string.h> //Pre-Process directive to include string input output header file
int main()
{
    /* String Declaration*/
    char nickname[20];

    /* Console display using puts */
    puts("Enter your Nick name:");

    /*Input using gets*/
    gets(nickname);

    puts(nickname);

    return 0;
} 