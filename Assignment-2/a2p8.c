//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-08: Write a program to check whether the given number is even or odd using a bitwise operator.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-08: Will Check & Print, Whether The Given Number Is \"Even Or Odd\", Using A Bitwise Operator, On The Screen...");

    // DATA INPUT...
    printf("\n\n");
    int num, result;
    printf("Enter a Number, To Know, Whether The Given Number Is \"Even Or Odd\": ");
    scanf("%d", &num);
    printf("The Number Entered By You, Is: %d", num);

    // DATA PROCESSING...
    result = num & 1;
    printf("\n\n");
    printf("But, We Want To Know, Whether The Number You Have Entered, Is \"Even Or Odd\", Right...");

    if (result == 1)
    {
        printf("\n\nIt Is, \"Odd\"");
        goto x;
    }
    else
    {
        printf("\n\nIt Is, \"Even\"");
        goto y;
    }

// DATA OUTPUT...
x:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You, %d is An: \"Odd Number\"", num);
    goto z;
y:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You, %d is An: \"Even Number\"", num);

    // FORMALITY...
z:
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}