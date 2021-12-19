/* 12-18-21 - Day # 2  Marcelo De Risio
This program will calculate the phase angle theta between I and V on
a RLC series circuit with R = 15 Ohms, L = 0.08 H and C = 30 uF.
The frequency is 60 Hz.
freq = frequency, theta = phase angle, V = Voltage, I = Current */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float R, L, C, PI, Freq, omega, Capacitance, Inductance;
double value_theta, theta;

int main()
{
    PI = 3.1415;    // Pi
    R = 15;         // Ohms
    L = 0.08;       // Henries
    C = 30e-06;     // Farads
    Freq = 60;      // Hertz

    // calculate omega in radians
    omega = 2 * PI * Freq;   //ok

    // calculate the reactive inductance w*L
    Inductance = omega * L;  //ok

    // calculate the reactive capacitance 1/w*C
    Capacitance = (1 / (omega * C));

    //  double atan(double x);
    value_theta = ((Inductance - Capacitance) / R);
    theta = atan(value_theta);

    // to convert theta from radians to degrees is: Radians / 0.017453 = degrees
    theta = theta/0.017453;

    printf("----------------------------------------------------------------------------------------- \n" );
    printf("12-18-21 - Day # 2  Marcelo De Risio \n" );
    printf("This program will calculate the phase angle theta between I and V on a RLC series circuit \n" );
    printf("with R = 15 Ohms, L = 0.08 H and C = 30 uF. The frequency is 60 Hz. \n" );
    printf("Freq = frequency, theta = phase angle, V = Voltage, I = Current. \n" );
    printf("----------------------------------------------------------------------------------------- \n" );
    printf("Given R: %f Ohms, L: %f Henries C: %f Farads, and Freq f: %f Hertz \n", R, L, C, Freq);
    printf("Omega is: %f radians, Inductance is: %f Ohms, Capacitance is: %f Ohms, and theta: %f degrees \n", omega, Inductance, Capacitance, theta);

    return 0;
}
