/*
 * File: 0-binary_to_uint.c
 * Author: Ikenna Solomon Ejeagwu
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int zen;
	unsigned int num_val = 0;

	if (!b)
		return (0);

	for (zen = 0; b[zen]; zen++)
	{
		if (b[zen] < '0' || b[zen] > '1')
			return (0);

		num_val = 2 * num_val + (b[zen] - '0');
	}
	return (num_val);
}
