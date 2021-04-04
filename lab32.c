 Program for reading and writing the student marks data to files
// Writted by -- Akarshit Gupta
// 3-04-2021

#include <stdio.h> // Pre-Process directive to include standard input output functions header file
#include <stdlib.h> //Pre-Process directive to include standard library functions header file

int main() { // Main function body starting
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);

	//Declaraing a pointer of type FILE. This declaration is needed for communication between the file and the program.
	FILE *fptr;

	//Creating a new file named "newprogram.txt" and opening it for writing as per the mode 'w'.
	fptr=(fopen("D:\\C_Programs\\AKARSHITGUPTA_51_C_Programs_Repository\\program.txt","a"));

	//Checking whether the file is empty? if yes, it will return Error! and exits the file
	if(fptr==NULL) {   
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);//fclose function is used to close the file
	return 0; //return function

} //Main function body ends 