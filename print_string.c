#include "main.h"

void print_string(char *str, int *len)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		(*len)++;
	}
}
