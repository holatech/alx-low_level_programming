#include "main.h"

/**
 * _isalpha - checks if an argument is a letter
 *
 * @c: letter
 *
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
