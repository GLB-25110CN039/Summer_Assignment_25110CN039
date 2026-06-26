// FIRST PROJECT: To build a game to guess a number by user.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    // printf("Random Number : %d",random_number);
    int guessed_number;
    int no_of_guesses = 0;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number)
        {
            printf("lower number please!\n");
        }
        else if (guessed_number < random_number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("Congrats\n");
        }
        no_of_guesses++;
    } while (guessed_number != random_number);
    printf("You guessed the number in %d guesses", no_of_guesses);
    return 0;
}