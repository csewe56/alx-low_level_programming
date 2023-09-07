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
	long long  int d;
	float e;

	prinf("Size  of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	prinf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	prinf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	prinf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	prinf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
