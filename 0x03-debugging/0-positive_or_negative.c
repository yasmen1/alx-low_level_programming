#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * Description: print value of n satus; zero, positive or negative.
 * @n: The Integer to test.
 *
 * Return: Always 0 (Success)
*/

void positive_or_negative(int n)
{
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
