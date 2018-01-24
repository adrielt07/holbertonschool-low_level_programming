#include "holberton.h"
/**
 * _islower - check if char is lower or upper case
 *
 * return: return 1 if upper and 0 if lower
 *
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	
	return (0);
}
