//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-01: Write a program to print unit digit of a given number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-01: Will Print Unit Digit Of A Given Number On The Screen...");

    // DATA INPUT...
    printf("\n\n");
    int num, unit_Digit;
    printf("Enter a Number, To Get It's Unit Digit: ");
    scanf("%d", &num);
    printf("The Number Entered By You, Is: %d", num);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want The \"Unit Digit\" Of The Number You Have Entered, Right...");
    unit_Digit = num % 10 ;
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("\"Unit Digit\" Of Your Entered Number, %d is: %d", num, unit_Digit);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}