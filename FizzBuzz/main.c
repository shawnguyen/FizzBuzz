//
//  main.c
//  FizzBuzz
//
//  Created by Shawn Nguyen on 1/25/19.
//  Copyright © 2019 Shawn Nguyen. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i = 0;
    
    for(i = 1; i <= 100; i++) // Array
    {
        if(i % 15 == 0) // Divisible by 3 & 5
        {
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0) // Divisible by 3
        {
            printf("Fizz\n");
        }
        else if(i % 5 == 0) // Divisible by 5
        {
            printf("Buzz\n");
        }
        else // If not divisible by 3, 5, or both
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
