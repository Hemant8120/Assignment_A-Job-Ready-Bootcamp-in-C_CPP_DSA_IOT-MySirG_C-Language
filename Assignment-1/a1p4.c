//  Assignment - 1   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Input and output in C Language
/*  
    Assignment-01_Problem-04: WAP to find the area of the circle. Take radius of circle from user as input and print the 
    result in below given format.
    Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-01_Problem-04: To Find the Area Of The Circle By Taking User Input...");

    // DATA INPUT...
    printf("\n\n");
    float pi=3.14, radius, area;
    printf("Enter The Value Of Radius Of Circle, For Which You Want To Find Out It's Area: ");
    scanf("%f", &radius);
    printf("The Value Entered By You is: %.2f", radius);
    printf("\n\n");

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want The \"Area Of The Circle\" From The Number You Have Entered, Right...");
    area = pi * radius * radius;

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Area Of The Circle is %.2f meter square, Having The Radius %.2f meter...", area, radius);

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}