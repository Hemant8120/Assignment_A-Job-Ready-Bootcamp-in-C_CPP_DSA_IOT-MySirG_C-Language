//  Assignment - 1   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Input and output in C Language
/*  
    WAP to print the name of the user in double quotes.
    Expected output format – “Hello, Amit Kumar”
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-01_Problem-06: To Print The Name Of The User In Double Quotes...");

    // DATA INPUT...
    printf("\n\n");
    char str[20];
    printf("Enter Your Name, To Get It In Double Quotes: ");
    // scanf("%s", str);    // This Block is To Print The "First Name"
    gets(str);              // This Block is To Print The "Full  Name"
    
    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To \"To Print The Name Of The User In Double Quotes\" Of The Name Of The User, You Have Entered, Right...");
    printf("\n");
    printf("\n");
    printf("The Name Entered By You Is: %s", str);
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("And Here Is Your Name With Double Quotes: \"Hello, %s\"", str);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}