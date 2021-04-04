// PROGRAM TO CHECK VOWEL OR CONSONENT.
// Writted by -- Akarshit Gupta
// 2-04-2021

#include <stdio.h> // Pre-Process directive to include Standard input output functions header file
int main() { // Main function body starting..
    char c; // c variable declaration of char data type.
    int lowercase_vowel, uppercase_vowel; //lowercase_vowel and uppercase_vowel variable declaration of int data type

    printf("Enter an alphabet: ");
    scanf("%c", &c); //Taking character as a input from the user

    // Assigning lowercase vowels to c
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // Assigning uppercase vowels to c
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)// evaluates to 1 (true) if c is a vowel
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);// else it will print "c" is a constant.
    return 0;

} //main function body ends