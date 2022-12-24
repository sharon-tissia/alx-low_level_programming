#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
=======
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
>>>>>>> 8f0254d4a51c480e7111b38d2a37bdabb350e277
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
<<<<<<< HEAD
		putchar('\n');
		return (0);
=======
	putchar('\n');
	return (0);
>>>>>>> 8f0254d4a51c480e7111b38d2a37bdabb350e277
}
