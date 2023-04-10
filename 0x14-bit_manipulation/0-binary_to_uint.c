#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary string to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int night = 0, sum;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[night] != '\0')
		night++;
	night -= 1;
	sum = 0;
	while (b[sum])
	{
		if ((b[sum] != '0') && (b[sum] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[sum] == '1')
			number += (1 * (1 << night));/*<< bitwise left shift operator*/
		sum++;

		night--;
	}
	return (sum);
}
