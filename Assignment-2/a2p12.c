//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-12: Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-12: Will Convert The INR To USD And Print On The Screen...");

    // DATA INPUT...
    printf("\n\n");
    float INR, USD;
    printf("Enter An Amount In INR, To Convert It Into USD: ");
    scanf("%f", &INR);
    printf("The Amount Entered By You, Is: %.2f INR", INR);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Convert The Currency From \"INR To USD\" Of An Amount You Have Entered, Right...");
    USD = INR / 76.23;

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("\"INR To USD\" Of Your Entered Amount, %.2f INR is: %.2f USD", INR, USD);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}