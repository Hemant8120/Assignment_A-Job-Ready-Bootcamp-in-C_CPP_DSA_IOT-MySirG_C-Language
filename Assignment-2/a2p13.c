//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-13: Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-13: Will Rotate The Three-Digit Number And Print On The Screen...");

    // DATA INPUT...
    printf("\n\n");
    int three_Digit_Number, first_Digit, second_Digit, third_Digit;
    printf("Enter a \"Three Digit Number\", To Append(PLUS) All The Digits And Add It To The Last Digit Of Number: ");
    scanf("%d", &three_Digit_Number);
    printf("The Number Entered By You, Is: %d", three_Digit_Number);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Get The Last Digit Of Number Stored In A Variable As \"Zero\", Right...");
    third_Digit = three_Digit_Number / 100;
    second_Digit = three_Digit_Number / 10 % 10;
    first_Digit = three_Digit_Number % 10;

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("So, The Last Digit Of Number Stored In A Variable As \"Zero\", %d is: %d%d%d", three_Digit_Number, first_Digit, second_Digit, third_Digit);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}