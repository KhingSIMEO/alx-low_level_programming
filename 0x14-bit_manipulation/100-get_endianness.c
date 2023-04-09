/*
 * File: 100-get_endianness.c
 * Author: Ikenna Solomon Ejeagwu
 */

#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Returns: if big endian - 0.
 *	 if little endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
