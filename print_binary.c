#include "main.h"
#include <stdio.h>
/**
  *print_binary - takes a number and gets its binary 
  *number then prints its like a string
  *@number: the number to print 
  *@len: how far the length has come
  *
  *Return: nothing 
  */
void print_binary(int number, int *len)
{
	int bit = 0;
	int multiplier = 1;
	int binary_number = 0;
	int bit_offset;

	while (number > 0)
	{
		bit = number % 2;
		bit_offset = bit * multiplier;
		binary_number = binary_number + bit_offset;
		multiplier = multiplier * 10;
		number = number / 2;
	}
	/*printf("%d", binary_number);*/
	print_number (binary_number, len);
}
