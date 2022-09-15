#include "main.h"

/**
 * _isdigit - checks for lowercase character.
 * @c: character to check
 * Return: 1 if c is digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
