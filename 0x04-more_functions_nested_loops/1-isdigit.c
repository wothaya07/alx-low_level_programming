#include "main.h"

/**
 * _isdigit  - checks for a digit (0 through 9)
 * @c: digits to be checked
 *
 * Return: 1 if a digit and 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 90)
	{
	return (1);
	}
	return (0);
}
