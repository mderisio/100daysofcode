/* 12-23-21 - Day # 6  Marcelo De Risio
IDE: Code::Blocks 20.03; Cygwin Compiler
This is an improved version of Day 3 "guess the number" game:
The computer will choose a number between 1 and 10. The player will have to guess it in 4 tries or lose the game.
I am using a simple loop and counter to count the # of tries */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Generate random number N between 0 and 10
int rand_max, random_value, input_number;
int N = 11;   // Max number (0 to 10)
time_t t;     // function time to seed the rand
int count;    // counter for the amount of tries
int tries;    // # of tries

int main()
{
    // Before use rand I need to run srand and seed the generator in this case with the variable time
    srand((unsigned) time(&t));

    // Generates a random value between 0 and the maximum given by the compiler
    random_value = rand();

    //Now I limit the random value to rand_max established by N
    //rand_max is my number for the game
    rand_max = random_value % N;

    //printf("-----------------------------------\n");
   // printf("  TEST TEST COMPUTER NUMBER IS %d  \n", rand_max);    use this only to test the code
   // printf("-----------------------------------\n");

     count=1;
     tries = 5;
     while (count <= 5)

     {

        do
        {

           printf("-----------------------------------------------------------------\n");
           printf("The computer is picking a number between 0 and 10 guess the number: \n");
           printf("You have only %d tries \n", tries);
           printf("-----------------------------------------------------------------\n");

           scanf( "%d", & input_number);

                if (input_number == rand_max)
                {
                    printf("--------------------------------------------\n");
                    printf("YOU GUESSED THE CORRECT NUMBER! in %d TRIES \n", count);
                    printf("--------------------------------------------\n");

                }

                    else
                {
                    printf("-------------------------------\n");
                    printf("Incorrect number, try again \n" );
                    printf("You have %d tries left \n", tries - count);
                    printf("------------------------------\n");

                    count++;
                }

        }
            while (input_number != rand_max);

     }


        return 0;

}
