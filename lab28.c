// To store the information of student marks using structures and find total marks of individual student
// Written by -- Akarshit Gupta
// 3-04-2021


#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
struct student{ //Structure body

    char name[50]; //name variable declaration of char data type
    int roll;  //roll variable declaration of int data type
    float marks1, marks2 ,marks3 , marks4 ;

} s;

int main(){ //Main function body starting

    printf("Enter information:\n\n");

    //taking student's name as a input from the user
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    //taking student's roll no. as a input from the user.
    printf("\nEnter roll number: ");
    scanf("%d", &s.roll);

    //taking student's marks as a input from the user using do while loop
    do{
        printf("\nEnter marks of first subject out of 30: ");
        scanf("%f", &s.marks1);
    }while(s.marks1<30);

    do{
        printf("\nEnter marks of second subject out of 30: ");
        scanf("%f", &s.marks2);
    }while(s.marks2<30);

    do{
        printf("\nEnter marks of third subject out of 30: ");
        scanf("%f", &s.marks3);
    }while(s.marks3<30);

    do{
        printf("\nEnter marks of fourth subject out of 30: ");
        scanf("%f", &s.marks4);
    }while(s.marks4<30);


    // Printing the student's information
    printf("\nDisplaying Information!\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);

    do{
        printf("Total marks out of 120: %f\n", s.marks1+s.marks2+s.marks3+s.marks4);    
    }while((s.marks1+s.marks2+s.marks3+s.marks4)<120);


    return 0; //Return function

} // Main function body ends 