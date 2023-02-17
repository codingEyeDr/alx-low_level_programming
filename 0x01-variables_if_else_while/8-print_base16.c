#include <stdio.h>
/**
 * main - starting point for program execution
 * Return: returns 0 when the program is executed successfully
 */

int main(void)
{
	int i;
	char m;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
