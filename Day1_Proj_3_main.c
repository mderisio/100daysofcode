#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declare variables */

    float x, y, z, average, sumTotal;

    /* Define quantities for the variables */

    x = 20.67, y = 5.45, z = 4.78;

    /* Conduct computations */

    sumTotal = x+y+z;
    average = (x+y+z)/3;

    /* Print results */

    printf("The addition of %f and %f and %f is %f\n", x, y, z, sumTotal);

    printf("The average is %f \n", average);

    //always print the values in an organized way

    return (0);

}
