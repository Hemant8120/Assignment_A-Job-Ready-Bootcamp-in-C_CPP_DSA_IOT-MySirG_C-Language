//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-10: Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-10: Will Append(PLUS) All The Digits And Add It To The Last Digit Of Number...");

    // DATA INPUT...
    printf("\n\n");
    int three_Digit_Number, first_Digit, second_Digit, third_Digit, sum_Of_Three_Digits, unit_Digit_To_Sum;
    printf("Enter a \"Three Digit Number\", To Append(PLUS) All The Digits And Add It To The Last Digit Of Number: ");
    scanf("%d", &three_Digit_Number);
    printf("The Number Entered By You, Is: %d", three_Digit_Number);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Get The Last Digit Of Number Stored In A Variable As \"Zero\", Right...");
    third_Digit = three_Digit_Number / 100;
    second_Digit = three_Digit_Number / 10 % 10;
    first_Digit = three_Digit_Number % 10;
    sum_Of_Three_Digits = third_Digit + second_Digit + first_Digit;
    unit_Digit_To_Sum = (three_Digit_Number * 10) + sum_Of_Three_Digits;

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("So, The Last Digit Of Number Stored In A Variable As \"Zero\", %d is: %d", three_Digit_Number, unit_Digit_To_Sum);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}