#include "main.h"

/**
 * puts2 - Prints every other char of a string
 * @str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{

	int b;
	int g = 0;

	while (str[g] != '\0')
	{
		g++;
	}

	for (b = 0; b < g; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
