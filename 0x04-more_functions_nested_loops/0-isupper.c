#include "main.h"
/**
 * is upper : returs 1 if the letter is uppercase and 0 if its lowercase
 * @c : char
 * Return : 0 or 1
 */

int _isupper(int c)
{
	if (c>= 'A' && c<='Z')
		return (1);
	else if (c>='a' && c<= 'z')
		return (0);
}
