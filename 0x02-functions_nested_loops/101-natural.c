#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, sumMultiples = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sumMultiples += i;
		}

		i++;
	}

	printf("%d\n", sumMultiples);
	return (0);
}
