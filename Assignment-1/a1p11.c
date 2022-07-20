//  Assignment - 1   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Input and output in C Language
/*  
    Assignment-01_Problem-11:   WAP to take time as an input in below given format and convert the time format and 
                                display the result as given below.
                                User Input date format – “HH:MM”
                                Output Format   – “HH hour and MM Minute”
                                        Example – “11:25” converted to “11 Hour and 25 Minute”
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-01_Problem-11:  User Input Time Format - \"HH:MM\", Output Format - \"HH hour and MM Minute\", Example - \"11:25\" converted to \"11 Hour and 25 Minute\"");

    // DATA INPUT...
    printf("\n\n");
    int hour, minute;
    printf("Enter The Time In The Format (HH:MM): ");
    scanf("%d:%d", &hour, &minute);
    printf("\n");
    printf("The Time Entered By You Is: %d:%d", hour, minute);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, The Format We Want To Arrange This Time As \"HH hour and MM Minute\" Right...");
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Here Is, It's Print: Time - %d Hour & %d Minute", hour, minute);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}