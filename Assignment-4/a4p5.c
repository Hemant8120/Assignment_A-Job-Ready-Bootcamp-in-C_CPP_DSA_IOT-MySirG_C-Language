//  Assignment - 4   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-04_Problem-05: Write a program to print the first 10 odd natural numbers in reverse order.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-04_Problem-05: Will Print, The First 10 Odd Natural Numbers In Reverse Order On The Screen...");

    int i;

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Print, The First 10 Odd Natural Numbers In Reverse Order On The Screen, Right...");
    printf("\n\n");

    for (i = 10; i >= 1; i--)
    {
        printf("%d", 2 * i - 1);
        printf("\n");
    }

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("This Was The Program, To Print, The First 10 Odd Natural Numbers In Reverse Order On The Screen");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}