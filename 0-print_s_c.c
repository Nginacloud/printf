#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - printf function
 * @format: string
 * 
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int len = 0;
	char chartoCheck;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			chartoCheck = format[i + 1];
			switch(chartoCheck)
			{
				case 'c':
					_putchar(va_arg(ap, int));
					i++;
					len++;
					continue;
				case 's':
					print_string(va_arg(ap, char *), &len);
					i++;
					continue;
				case '%':
					_putchar('%');
					i++;
					len++; /*increment len*/
					continue;
			}
		}
	}	
	va_end(ap);
	return (len);
}
