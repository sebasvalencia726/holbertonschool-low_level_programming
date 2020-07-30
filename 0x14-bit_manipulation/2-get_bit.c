#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long integer to check.
 * @index:  index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitStatus;

	bitStatus = (n >> index) & 1;
	return (bitStatus);
}
