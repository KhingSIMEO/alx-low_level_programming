/*
 * File: 5-flip_bits.c
 * Author: Ikenna Solomon Ejeagwu
 */

#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * 		 that flips from one number to another.
 * @f: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from f to m.
 */
unsigned int flip_bits(unsigned long int f, unsigned long int m)
{
	unsigned long int xor = f ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
