//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-03:  Write a program to swap values of two int variables.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-03: Will Swap The Values, Of \"Two int Variables\"...");

    // DATA INPUT...
    printf("\n\n");
    int number_1, number_2, swaping_Agent_Number;
    printf("Enter The First Number: ");
    scanf("%d", &number_1);
    printf("Enter The Second Number: ");
    scanf("%d", &number_2);
    printf("\n");
    printf("The Numbers Entered By You, Are:-\n Number-1: %d \n Number-2: %d", number_1, number_2);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To \"Swap These Two Numbers\" You Have Entered, Right...");
    swaping_Agent_Number = number_1 ;
    number_1 = number_2 ;
    number_2 = swaping_Agent_Number ;
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("These Two Numbers After \"Swaping\" Are:-\n Number-1 After Swaping: %d \n Number-2 After Swaping: %d", number_1, number_2);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}