//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-10: Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-10: Will Make The Last Digit Of Number Stored In A Variable As Zero...");

    // DATA INPUT...
    printf("\n\n");
    int num, rest_of_Unit_Digit, unit_Digit, unit_Digit_To_Zero;
    printf("Enter a Number, To Get The Last Digit Of Number Stored In A Variable As \"Zero\": ");
    scanf("%d", &num);
    printf("The Number Entered By You, Is: %d", num);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Get The Last Digit Of Number Stored In A Variable As \"Zero\", Right...");
    rest_of_Unit_Digit = num / 10;
    // unit_Digit = num % 10;
    unit_Digit_To_Zero = rest_of_Unit_Digit * 10;

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("So, The Last Digit Of Number Stored In A Variable As \"Zero\", %d is: %d", num, unit_Digit_To_Zero);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}