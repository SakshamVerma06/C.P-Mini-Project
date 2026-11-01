#include <stdio.h>

int main() {
    int guess;
    int attempts = 0;
    int seed;
    int secret_number;

    printf("===================================\n");
    printf("     NUMBER GUESSING GAME (1-100)  \n");
    printf("===================================\n");
    
    printf("Enter any number to shuffel: ");
    scanf("%d", &seed);

    secret_number = ((seed * 1103515245 + 12345) / 65536) % 100;
    if (secret_number < 0) {
        secret_number = -secret_number;
    }
    secret_number = secret_number + 1; 

    printf("\nI have decided a no between 1-100!\n");
    printf("Can you Guess the number??\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too High! \n\n");
        } else if (guess < secret_number) {
            printf("Too Low!\n\n");
        } else {
            printf("\n----------------------------------\n");
            printf("          CONGRATULATIONS        ");
            printf("\n----------------------------------\n");
            printf("You Guessed the no in %d attempts.\n", attempts);
        }
    } 
    while (guess != secret_number);

    return 0;
}
