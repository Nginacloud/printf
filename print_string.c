#include "main.h"

void print_string(char *str, int *len)
{
	/*int j = 0;*/
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str /*[j]*/ != '\0')
	{
		_putchar(*str/*[j]*/);
		/*j*/(*len)++;
		str++;
	}
}
