/* 12-24-21 - Day #8  Marcelo De Risio
IDE: Code::Blocks 20.03; Cygwin Compiler
This short program calculates the Base current Ib, and emitter current Ie of a Bipolar Junction Transistor,
given its Beta B, Collector to Emitter current ICeo, and collector current Ic.  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    printf("This short program calculates the Base current Ib, and emitter current Ie of a Bipolar Junction Transistor,\n");
    printf( "given its Beta B, Collector to Emitter current ICeo, and collector current Ic.\n \n");

    //Define transistor Beta, ICeo, I Collector IC variables
    float Beta, Ic, ICeo, Ib, Ie ;

    printf("Enter transistor Beta: ");
    scanf(" %f", &Beta);

    printf("Enter transistor ICeo in uA: ");
    scanf(" %f", &ICeo);

    printf("Enter transistor IC in mA: ");
    scanf(" %f", &Ic);

    //  using pow( number, exponent) I convert the units
        ICeo = (ICeo)*1*pow(10, -6);
        Ic= (Ic)*pow(10, -3);

        Ib = (Ic - ICeo)/ Beta;

        Ie = Ic + Ib;

    printf("The Base current Ib in uA is: %E \n", Ib);
    printf("The Emitter current Ie in mA is: %E mA \n",Ie);

    return 0;
}
