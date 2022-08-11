//  Assignment - 4   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-04_Problem-02: Write a program to print the table of 5.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-04_Problem-02: Will Print, The Table Of 5, On The Screen...");

    int i, table = 5;

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Print, The Table Of 5, On The Screen, Right...");
    printf("\n\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d", table, i, i * table);
        printf("\n");
    }

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("This Was The Program, To Print, The Table Of 5, On The Screen");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}