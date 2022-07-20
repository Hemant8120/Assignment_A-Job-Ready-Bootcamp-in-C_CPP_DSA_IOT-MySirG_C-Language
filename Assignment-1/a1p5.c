//  Assignment - 1   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Input and output in C Language
//  Assignment-01_Problem-05: WAP to calculate the length of String using printf function.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-01_Problem-05: To Calculate The Length Of The String, Using printf Function...");

    // DATA INPUT...
    printf("\n\n");
    char str[100];
    int length;
    printf("Enter A String To Calculate It's Length: ");
    // gets(str);
    // scanf("%s", &str);
    // printf("\n");
    printf("The String Entered By You Is: %s", gets(str));
    printf("\n\n");

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To \"Calculate The Length Of The String\" Of The String You Have Entered, Right...");
    length = strlen(str);

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Length of the string = %d\n", length);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}