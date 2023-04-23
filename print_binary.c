#include "main.h"

/**
 * print_binary - Function that handle the binary specifier
 * @num: The integer to be printed
 *
 * Return: The number of characters printed
 */
int print_binary(unsigned int num)
{
	int i = 0;
	int count = 0;
	int binary_digits[];

	if (num == 0) /* if the number is zero, just print 0 */
	{
		_write('0');
		count++;
	}
	else
	{
		/* Converting the number to its binary */
		while (num > 0)
		{
			binary_digit[i] = num %= 2; /*storing the remainder in the binary_digit */
			num /= 2; /* The will update the number by dividing by 2 */
			i++;
		}

		/* Now print the digits in reverse order */
		for (j = (i - 1); j >= 0; j--)
		{
			_write(binary_digit[j] + '0');
			count++;
		}
	}
	return (count);
}
