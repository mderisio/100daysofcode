/* 12-19-21 - Day # 3  Marcelo De Risio
IDE: Code::Blocks 20.03;
This simple program calculate the area of a circle
given the operator's input of the radius in inches */

#include <stdio.h>
float PI = 3.1415;

int main()
{

    // define local variables,
    float radius, AreaIn, AreaCm;

    // ask user for input
    printf("Input radius in inches: ");
    scanf(" %f", & radius);

    // calculate the circle's area in sq inches and convert to centimeters
    AreaIn = PI*radius*radius;
    AreaCm = AreaIn/2.54;

    printf("The area in inches^2 is: %f \n", AreaIn);
    printf("The area in centimeters^2 is: %f", AreaCm);

    return 0;
}
