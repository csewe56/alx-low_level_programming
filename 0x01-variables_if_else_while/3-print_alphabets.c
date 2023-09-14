#include <stdio.h>


/**
 * main - function of the task
 * Return:always zero
 */

int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

