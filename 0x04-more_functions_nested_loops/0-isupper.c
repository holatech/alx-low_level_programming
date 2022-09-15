#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the character
 * Return: 1 if c is uppercase and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
