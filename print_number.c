#include "main.h"
#include <stdio.h>
#include <limits.h>/*to handle INT MIN*/
void print_number(int number)
{
	if (number == INT_MIN)
	{
		_putchar('_');
		print_number(1);
		print_number(214748364);
	}
	else if (number < 0)
	{
		_putchar('_');
		print_number(-number);
	}
	else if (number >= 10)
	{
		print_number(number / 10);
		_putchar(number % 10 + '0');
	}
	else
	{
		_putchar(number + '0');
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
