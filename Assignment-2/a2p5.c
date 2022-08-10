//  Assignment - 2   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-02_Problem-05:   Write a program to input a three-digit number and display the sum of the digits.
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-02_Problem-05: Will \"Display The Sum Of The Digits\", From The Three Digit Number, Entered By The User...");

    // DATA INPUT...
    printf("\n\n");
    int three_Digit_Number, first_Digit, second_Digit, third_Digit, sum_Of_Three_Digits, digit_Count;
    printf("Enter A \"Three Digit Number\" To Get The \"Sum Of Their Digits\": ");
    scanf("%d", &three_Digit_Number);
    printf("\n");
    printf("The Three Digit Number, Entered By You, Is: %d", three_Digit_Number);

    // DATA CHECKING
    if(three_Digit_Number>=100 && three_Digit_Number<=999)
	{
   // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To \"Display The Sum Of The Digits\" From The Three Digit Number, You Have Entered, Right...");
    first_Digit = three_Digit_Number % 10 ;
    second_Digit = three_Digit_Number / 10 % 10 ;
    third_Digit = three_Digit_Number / 100 ;
    sum_Of_Three_Digits = third_Digit + second_Digit + first_Digit ;
    
    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The \"Sum Of The Digit Number\", Entered By Is: %d", sum_Of_Three_Digits);
		
    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");
	}
	
    // USER WARNING
    else
    {
        printf("\n\nSorry...\nThe Number You Have Entered, Is Not A \"Three Digit Number\"...");
    
        while (three_Digit_Number > 0)
	    // while (three_Digit_Number!=0)
        {
            digit_Count++;
            three_Digit_Number = three_Digit_Number / 10 ;
            // unit_Digit = three_Digit_Number % 10 ;
        }
	
	    printf("\n\nInfact...\nThis is A: %d Digit Number...\n\nSo Please, Try To Enter A \"Three Digit Number Only\"...\nAnd Try Again...", digit_Count);
    }


    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}