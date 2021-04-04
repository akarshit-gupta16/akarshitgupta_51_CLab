// Fibonacci sequence using recursion
// Written by -- Akarshit Gupta
//2-04-2021

#include<stdio.h> //Pre-Process directive to include input output header file.
long int multiplyNumbers(int n); //Variable declaration of long int data type
int main() { //main function body starting
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n); //taking n as a input from the user
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
} 
void printFibonacci(int n){   
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    printFibonacci(n-2);//n-2 because 2 numbers are already printed    
  return 0;  
 }     