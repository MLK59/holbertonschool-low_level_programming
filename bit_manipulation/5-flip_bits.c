#include "main.h"

/**
 * flip_bits - Calculates the number of bit flips required
 * to transform one number into another
 *
 * @n: The first input number
 * @m: The second input number
 *
 * Return: An unsigned integer representing the number of bit flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0; /**Initialize a counter variable */
	unsigned int flips = 0; /** Initialize a counter for bit flips */

	/**Iterate through the 64 bits of the numbers*/
	while (i <= 63)
	{
	/**Check if corresponding bits differ between the two numbers */
	if ((n & 1) != (m & 1))
	{
		flips++; /**Increment the flip counter if bits differ */
	}

	/**Shift both numbers to the right by one bit*/
	n >>= 1;
	m >>= 1;

	/**Increment the counter to move to the next bit*/
	i++;
	}

	return (flips);
	/**Return the total number of bit flips*/
}
