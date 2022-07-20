//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-02: Write a program to print a given number without its last digit.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-02: Will Print A Given Number, \"Without It's Last Digit\", On The Screen...");

    // DATA INPUT...
    printf("\n\n");
    int num, rest_of_Unit_Digit, unit_Digit;
    printf("Enter a Number, To Get It's Unit Digit: ");
    scanf("%d", &num);
    printf("The Number Entered By You, Is: %d", num);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want The \"Rest Of Unit Digit\" Of The Number You Have Entered, Right...");
    rest_of_Unit_Digit = num / 10 ;
    // unit_Digit = num % 10 ;

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("\"Rest Of Unit Digit\" Of Your Entered Number, %d is: %d", num, rest_of_Unit_Digit);
    // printf("\n");
    // printf("Whereas..., \"Unit Digit\" Of Your Entered Number, %d is: %d", num, unit_Digit);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}