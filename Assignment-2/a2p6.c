//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-06: Write a program which takes a character as an input and displays its ASCII code.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-06: Will Displays The, ASCII Code Of A Given Character On The Screen...");

    // DATA INPUT...
    printf("\n\n");
    char ch;
    printf("Enter a Character, To Get It's Unit Digit: ");
    scanf("%c", &ch);
    printf("The Character Entered By You, Is: %c", ch);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want The \"ASCII Code\" Of The Character You Have Entered, Right...");
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("So, The \"ASCII Code\" Of The Character You Have Entered, %c is: %d", ch, ch);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}