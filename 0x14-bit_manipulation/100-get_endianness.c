/*
 * File Name: 100-get_endianness.c
 * Code by: Ikenna Solomon Ejeagwu
 */

#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Returns: 0 - if its  big endian, 
 * 		1 - if its little endian
 *
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
