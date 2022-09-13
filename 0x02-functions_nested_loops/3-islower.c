#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: caracter recibo por main.
 *
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
