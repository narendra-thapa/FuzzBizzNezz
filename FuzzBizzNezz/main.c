//
//  main.c
//  FuzzBizzNezz
//
//  Created by Narendra Thapa on 2015-11-25.
//  Copyright © 2015 Narendra Thapa. All rights reserved.
//
// Program Description:
// Prints numbers from 1 to the user's input for "Nezz". For the multiples of "Fuzz", prints "Fuzz" instead of the number and for the multiples of "Bizz", prints "Bizz" instead of the number. For numbers which are multiples of both "Fuzz" and "Bizz" prints "FuzzBizz"

#include <stdio.h>

int divide(int a, int b)                                            // this function returns remainder after division
{
    return a%b;
}
int main(int argc, char **argv)
{
    int Fuzz, Bizz, Nezz;                                           // integer variable initialization to hold user input
    
    // requesting values for above variables from user
    printf("Enter an integer which will be replaced by 'Fuzz', also its multiples: ");
    scanf("%i", &Fuzz);                                             // stores user's input to variable 'Fuzz'
    
    printf("Enter an integer which will be replaced by 'Bizz', also its multiples: ");
    scanf("%i", &Bizz);                                             // stores user's input to variable 'Bizz'
    
    printf("\nMultiples of both above integers will be replaced by FuzzBizz\n");
    printf("\nEnter an integer which will be the upperlimit of the counter 'Nezz': ");
    scanf("%i", &Nezz);                                             // stores user's input to variable 'Nezz'
    
    int i;                                                          // counter initialization from 1 to user value of 'Nezz'
    
    for (i=1;i<=Nezz;i++){                                          // for loop to increment 'i' from 1 to 'Nezz'
        int remainder_Fuzz = divide(i,Fuzz);                        // function call for remainder value after division by 'Fuzz'
        int remainder_Bizz = divide(i,Bizz);                        // function call for remainder value after division by 'Bizz'
        
        if (remainder_Fuzz == 0 && remainder_Bizz == 0)             // checks if remainder value is 0 for both division
        {
            printf("FuzzBizz\n");                                   // prints "FizzBuzz" instead of integer value
        }
        else if (remainder_Fuzz == 0 && remainder_Bizz != 0)        // checks if remainder value is 0 for division by 'Fuzz' only
        {
            printf("Fuzz\n");                                       // prints "Buzz" instead of integer value
        }
        else if (remainder_Fuzz != 0 && remainder_Bizz == 0)        // checks if remainder value is 0 for division by 'Bizz' only
        {
            printf("Bizz\n");                                       // prints "Bizz" instead of integer value
        }
        else
        {
            printf("%d\n", i);                                      // prints integer value
        }
    }
    return 0;
}
