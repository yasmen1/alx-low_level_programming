#include "main.h"
/**
 * _strlen_recursion - prints the lenght of a string
 * @s: string
 * Return: lenght of string, or 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);

}
