#include "main.h"

static void print_string(char *str, int *len)
{
	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		(*len)++;
		str++;
	}
}
