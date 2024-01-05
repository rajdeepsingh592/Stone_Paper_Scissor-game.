#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer)
{
	// If both the user and computer
	// has choose the same thing
	if (you == computer)
		return -1;

	// If user's choice is stone and
	// computer's choice is paper
	if (you == 's' && computer == 'p')
		return 0;

			// If user's choice is paper and
			// computer's choice is stone
			else if (you == 'p' && computer == 's') return 1;

	// If user's choice is stone and
	// computer's choice is scissor
	if (you == 's' && computer == 'c')
		return 1;

	// If user's choice is scissor and
	// computer's choice is stone
	else if (you == 'c' && computer == 's')
		return 0;

	// If user's choice is paper and
	// computer's choice is scissor
	if (you == 'p' && computer == 'c')
		return 0;

	// If user's choice is scissor and
	// computer's choice is paper
	else if (you == 'c' && computer == 'p')
		return 1;
}

// Driver Code
int main()
{
	// Stores the random number
	int t;

	char you, computer, result;

	// Chooses the random number
	// every time
	srand(time(NULL));

	// Make the random number less
	// than 100, divided it by 100
	t = rand() % 100;

	// Using simple probability 100 is
	// roughly divided among stone,
	// paper, and scissor
	if (t < 33)

		// s = Stone
		computer = 's';

	else if (t > 33 && t < 66)

		// p = Paper
		computer = 'p';

	// c = Scissor
	else
		computer = 'c';

	printf("\n\n\n\n\t\t\t\tWelcome to our game Stone_paper_Scissor\n\t\t\t\t\t\t\t");
	printf("\nEnter s for Ston \n");
	printf("\nEnter p for PAPER\n");
	printf("\nEnter c for Scissor\n");


	// input from the user
	scanf("%c\n", &you);

	// Function Call to play the game
	result = game(you, computer);

	if (result == -1) {
		printf("\n\n\t\t\t\tGame Draw!\n");
	}
	else if (result == 1) {
		printf("\n\n\t\t\t\tWow! You have won the game!\n");
	}
	else { 
		printf("\n\n\t\t\t\tOh! You have lost the game!\n");
	}
		printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",you, computer);

	return 0;
}
