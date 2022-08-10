//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-07: Write a program to find the position of first 1 in LSB.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-07: Will Print Position Of First 1 in LSB Of A Given Number On The Screen...");

    // DATA INPUT...
    printf("\n\n");
    int num, count=0, result=0;
    printf("Enter a Number, To Get It's Position Of First 1 in LSB: ");
    scanf("%d", &num);
    printf("The Number Entered By You, Is: %d", num);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want The \"Position Of First 1 in LSB\" Of The Number You Have Entered, Right...");
    while (num != 0)
    {
        result = num & 1 ;
        count++ ;
        
        if (result == 1)
        {
            printf("\n\nPosition = %d", count);
            break;
        }
        
        num = num >> 1 ;
    }
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("\"Position Of First 1 in LSB\" Of Your Entered Number, %d is: %d", num, count);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}