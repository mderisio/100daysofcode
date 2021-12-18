/* 12-17-21
This simple program works computes the average of three quantities */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c, avg;

    a = 2.2;
    b = 4;
    c = 6;

    avg = ((a+b+c) / 3);

    printf ("The average is = %f, \n", avg);
    //need to brush up a bit more on the printf specifiers %d, %f, etc


    return 0;
}
