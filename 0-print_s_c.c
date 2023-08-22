#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int len;
	char takenChar;
	char *takenString;
	int j;
	char chartoCheck;

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
			}
		}
	}

	
	va_end(ap);
	_putchar('\n');
	return (len);
}
