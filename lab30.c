// Array of structures for student marks for each student and passing  it to function for various operations
// Written by -- Akarshit Gupta
// 3-04-2021


#include <stdio.h> // Pre-Process directive to include standard input output function header file
#include <string.h> // Pre-Process directive to include string input output function header file

struct student //structure body
{   
     int id; //id variable declaration of int data type
     char name[30]; //name variable declaration of size 30 of char data type
     float percentage; //percentage variable declaration of float data type
};

int main() //main function body starting
{
     int i;
     struct student record[3]; // Declaraing record varible of size 3 for struct

     // Record of 1st Student
     record[0].id=1;
     strcpy(record[0].name, "RAJ RANA"); //Name of student
     record[0].percentage = 80.5; //Percentage scored by the student

     // Record of 2nd Student       
     record[1].id=2;
     strcpy(record[1].name, "ARYAN MAHAJAN");
     record[1].percentage = 82.6;

     // Record of 3rd Student
     record[2].id=3;
     strcpy(record[2].name, "AKARSHIT GUPTA");
     record[2].percentage = 91.2;

     //Printing student's Record using for loop
     for(i=0; i<3; i++)
     {
         printf(" RECORD OF STUDENT : %d \n", i+1);
         printf(" Id is: %d \n", record[i].id);
         printf(" Name of Student : %s \n", record[i].name);
         printf(" Percentage Scored by th Student : %f\n\n",record[i].percentage);
     }
     return 0; //return function of standard library

} //main function body ends 