#include <stdio.h>
/**
 * main - starting point for program execution
 * Return: returns 0 when the program is executed successfully
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
