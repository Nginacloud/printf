#include "main.h"
#include <stdio.h>
#include <limits.h>/*to handle INT MIN*/
void print_number(int number, int *len)
{
	int divisor = 1;
	int numcpy = number;

	if (number < 0)
	{
		_putchar('-');
		if (number == INT_MIN)
		{
			_putchar('2');
			numcpy = 147483648;/*value for numcpy when handling INT-MIN*/
			*len += 2;
		}
		else
		{
			number = number * -1;
			numcpy = numcpy * -1;
			(*len)++;
		}
	}
	while (numcpy / 10 != 0)
	{
		numcpy = numcpy / 10;
		divisor = divisor * 10;
	}
	divisor = divisor / 10;
	while (number != 0)
	{
		_putchar(number / divisor + '0');/*used _putchar for consistency*/
		number = number % divisor;
		divisor = divisor / 10;
		*len = *len + 1;
	}
	/*if (number < 0)
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
		}*/
}
