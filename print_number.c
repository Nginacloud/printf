#include "main.h"
#include <stdio.h>
void print_number(int number)
{
	int divisor = 1;
	int len = 0;

	if (number < 0)
	{
		putchar('_');
		number = -number;
		len++;
	}
	int numcpy = number;

	while (numcpy >= 10)
	{
		divisor *= 10;
		numcpy /= 10;
	}
	while (divisor > 0)
	{
		putchar(numcpy / divisor + '0');
		numcpy %= divisor;
		divisor /= 10;
		len++;
	}
}
/*void print_number(int number, int *len)
{
	if (number < 0)
	{
		putchar('-');
		number = number * -1;
		numcpy = numcpy * -1;
		*len = *len + 1;
	}

	while (numcpy != 0)
	{
		numcpy = numcpy / 10;
		divisor = divisor * 10;
	}
	divisor = divisor / 10;
	while (number != 0)
	{
		putchar(number / divisor + '0');
		number = number % divisor;
		divisor = divisor / 10;
		*len = *len + 1;
		}
}*/
