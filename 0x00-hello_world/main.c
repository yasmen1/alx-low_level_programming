#include <stdio.h>
#include "main.h"

/**
 * main - entrypoint
 *
 * return: always 0
 */
int main(void)
{
	int squared;

	squared = getSquare(2);
	printf("the value of square is: %d\n",  squared);
	return (0);
}
