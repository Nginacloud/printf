#include "main.h"

/**
 *print_binary - takes a number and gets its binary
 *number then prints its like a string
 *@number: the number to print
 *@len: how far the length has come
 *
 *Return: nothing
 */
void print_binary(unsigned int number, int *len)
{
	unsigned int numcpy = 0;
	int i = 0;
	char *numStr = NULL;

	numcpy = number;
	while (numcpy > 0)
	{
		numcpy = numcpy / 2;
		i++;
	}
	numStr = malloc(sizeof(char) * i);
	if (numStr == NULL)
	{
		return;
	}
	numStr[i] = '\0';
	i--;
	while (number > 0)
	{
		numStr[i] = (number % 2) + '0';
		i--;
		number = number / 2;
	}
	i = 0;
	while (numStr[i] != '\0')
	{
		_putchar(numStr[i]);
		(*len)++;
		i++;
	}
}
