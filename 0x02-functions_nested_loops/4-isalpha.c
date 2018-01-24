#include "holberton.h"

/**
 * _isalpha - check if char is an alpha
 *
 * @c: assign char as interger
 *
 * Return: return 1 if alpha, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);

}
