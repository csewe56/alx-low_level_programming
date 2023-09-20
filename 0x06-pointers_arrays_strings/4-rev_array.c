/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	if (n <= 1)  /* No need to reverse if there's 0 or 1 element */
		return;

	/* Use two pointers approach to swap elements from the ends */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap the elements at positions i and n - 1 - i */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

