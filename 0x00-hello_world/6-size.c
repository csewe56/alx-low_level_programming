#include <stdio.h>
/**
 * main - this subscribes the main function of the code
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	Printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	Printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	Printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	Printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	Printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
