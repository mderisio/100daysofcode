
/*12-17-21
This program will compute the quadratic equation
a*x^2 + b*x + c = 0  */

#include <stdio.h>
#include <stdlib.h>

int main()
{

// Declare variables

    float a, b, c, root, x1, x2;

// read values a, b, c

    a = 2, b = 4, c = 1;

// Conduct computations
    root = sqrt (b*b - 4*a*c);
    x1 = (-b+root)/ (2*a);
    x2 = (-b-root)/ (2*a);

// print results
    printf("The roots of a = %f, b = %f, and c = %f are: x1 = %f and x2 = %f\n", a, b, c, x1, x2);

return(0);

}

