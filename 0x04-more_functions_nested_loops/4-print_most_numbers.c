#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: The numbers from 0 to 9
 */

void print_most_numbers(void)

{
	int b = 0;

	for (; b <= 9; b++)
	{
		if (b == 2 || b == 4)
		{
			continue;
		}
		else
		{
			_putchar(b + '0');
		}
	}
	_putchar('\n');
}
