#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int guess, number, attempts = 0;
	srand(time(NULL));
	number = rand() % 100 + 1; // Generates a random number between 1 and 100
	
	printf("Welcome to the Number Guessing Game!\n");

	do {
		printf("Guess a number between 1 and 100: ");
		scanf("%d", &guess);

		attempts++;

		if (guess > number) {
			printf("Too high! Try again.\n");

		} else if (guess < number) {
			printf("Tool low! Try again.\n");

		} else {
			printf("Congratulations! You guessed the number in %d attempts.\n", attempts);

		}

	} while (guess != number);

	return 0;
}
