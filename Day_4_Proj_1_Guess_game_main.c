/* 12-20-21 - Day # 3  Marcelo De Risio
IDE: Code::Blocks 20.03; Cygwin Compiler
This is simple game: The computer will choose a number between 1 and 10 and the operator have to guess the number
I had to learn about srand() sets the seed which is used by rand to generate “random” numbers.
srand() needs to be set and called before the first call to rand, if not rand will give always the   */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Generate random number N between 0 and 10
int rand_max, random_value, input_number;
int N = 11;   // Max number (0 to 10)
time_t t;     // function time to seed the rand

int main()
{
    // Before use rand I need to run srand and seed the generator in this case with the variable time
    srand((unsigned) time(&t));

    // Generates a random value between 0 and the maximum given by the compiler
    random_value = rand();

    //Now I limit the random value to rand_max established by N
    //rand_max is my number for the game
    rand_max = random_value % N;

    do
    {
       printf("The computer did choose a number between 0 and 10. Please enter your guess number: \n");
       scanf( "%d", & input_number);

        if (input_number == rand_max)
        {
            printf("YOU GUESSED THE CORRECT NUMBER! \n");
        }

        else
            {
                printf("Incorrect number, please try again \n");
            }

    }
        while (input_number != rand_max);

    return 0;

}
