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
	unsigned int i = 1;
        char *c = (char *) &i;

	return (*c);
}
