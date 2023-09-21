#include <stdio.h>

/**
 * main - Entry point
 *
 * Program sets a[2] to 98 without using 'a' or modifying 'p'.
 * It accomplishes this with a single statement.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	p[5] = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}







