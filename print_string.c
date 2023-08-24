#include "main.h"
#include <stddef.h>
int print_string(char *str)
{
	int len = 0;
	int i = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		len++;
	}
	return (len);
}
/*void print_string(char *str, int *len)
{
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		(*len)++;
	}
}*/
