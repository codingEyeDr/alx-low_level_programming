#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 *
 * @n: number times table (0 < n < 15)
 *
 * Return: always 0
 */

void print_times_table(int n)
{
	int i, j, f;

	if (n  >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				f = i * j;
				_putchar(44);
				_putchar(32);
				if (f <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(f + 48);

				}
				else if (f <= 99)
				{
					_putchar(32);
					_putchar((f / 10) + 48);
					_putchar((f % 10) + 48);

				}
				else
				{
					_putchar(((f / 100) % 10) + 48);
					_putchar(((f / 10) % 10) + 48);
					_putchar((f % 10) + 48);

				}

			}
			_putchar('\n');

		}

	}

}
