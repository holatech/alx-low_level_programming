#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char myCharacter;
	int myInteger;
	long myLong;
	long long myLongLong;
	float myFloat;

	printf("Size of a char is %lu byte(s)\n", sizeof(myCharacter));
	printf("Size of an int is %lu byte(s)\n", sizeof(myInteger));
	printf("Size of a long int is %lu byte(s)\n", sizeof(myLong));
	printf("Size of a long long int is %lu byte(s)\n", sizeof(myLongLong));
	printf("Size of a float is %lu byte(s)\n", sizeof(myFloat));

	return (0);
}
