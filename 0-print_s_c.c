#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
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
	char takenChar;
	char *takenString;
	int j;
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
					takenChar = va_arg(ap, int);
					_putchar(takenChar);
					i++;
					len++;
					continue;
				case 's':
					takenString = va_arg(ap, char *);
					j = 0;
					while (takenString[j] != '\0')
					{
						_putchar(takenString[j]);
						j++;
						len++;
					}
					i++;
					continue;
				case '%':
					_putchar('%');
					i++;
					continue;
			}
		}
	}

	
	va_end(ap);
	return (len);
}
