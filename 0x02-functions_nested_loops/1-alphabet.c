#include "main.h"
/**
 * print_alphabelt - print all alphabelt in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'Z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
