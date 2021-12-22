/* 12-21-21 - Day # 5  Marcelo De Risio
IDE: Code::Blocks 20.03; Cygwin Compiler
This is simple program that calculate the resonance frequency of a series RLC circuit
given R, L, and C */

#include <stdio.h>
#include <stdlib.h>

float R, L, C, fo, a;

const PI = 3.141;

main()
{
    printf("Enter R in Ohms: ");
    scanf( "%f", & R);

    printf("Enter L in milliHenry: ");
    scanf( "%f", & L);

    printf("Enter C in microFarads: ");
    scanf( "%f", & C);

    L = L * 0.0001;
    C = C * 0.000010;

    fo = 1/(2*PI*sqrt(L*C));

    printf("             1          \n");
    printf(" fo = ------------------\n");
    printf("       2*Pi*SQRT (L*C)  \n");

    fo = (int)fo;
    printf("The frequency of resonance fo is: %f Hertz \n", fo);

    return 0;
}
