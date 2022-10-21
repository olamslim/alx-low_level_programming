#include "main.h"

/**
 * _isdigit - checks if char is a digit between 0 and 9
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1;
	return (x);
}
