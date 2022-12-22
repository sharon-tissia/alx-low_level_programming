#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: is the number to be checked
 * Return: 0 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
