#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int count, number;

	for (count = 0; count < 10; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}

