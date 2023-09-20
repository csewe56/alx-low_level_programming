#include "main.h"

int main(void)
{
	int a[] = {98, 1024, 402, -1024, 0};
	int *p;

	p = a;

	printf("a[2] = %d\n", *(p + 2));

	return (0);
}

