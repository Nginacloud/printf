#include "main.h"
#include <stddef.h>
int main()
{
	_printf("% ");
	_printf("%\0");
	_printf(NULL);
	 _printf("%s", NULL);
	 return (0);
}
