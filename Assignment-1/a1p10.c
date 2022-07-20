//  Assignment - 1   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Input and output in C Language
/*  
    Assignment-01_Problem-10: WAP to take date as an input in below given format and convert the date format and 
    display the result as given below.
    User Input date format – “DD/MM/YYYY” (27/11/2022)
    Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-01_Problem-10:  User Input Date Format - \"DD/MM/YYYY\" (27/11/2022) Output Format - \"Day - DD , Month - MM , Year - YYYY\" (Day - 27 ,Month - 07 , Year - 2022)");

    // DATA INPUT...
    printf("\n\n");
    int date, month, year;
    printf("Enter The Date In The Format (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("\n");
    printf("The Date Entered By You Is: %d/%d/%d", date, month, year);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, The Format We Want To Arrange This Date As \"Day - DD , Month - MM , Year - YYYY\" Right...");
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Here Is, It's Print: Day - %d, Month - %d, Year - %d", date, month, year);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}