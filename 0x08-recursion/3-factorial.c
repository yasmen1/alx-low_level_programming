#include "main.h"
/**
 * factorial - returns the factorial of given number
 * @n: int number
 * Return: 1 or, the factorial of n variable
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
