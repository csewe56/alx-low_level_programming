#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if malloc fails or if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k, len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++;
	}

	concatenated = malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len] != '\0')
	{
		concatenated[k] = av[i][len];
		len++;
		k++;
	}
		concatenated[k] = '\n';
		k++;
	}

	concatenated[k] = '\0';

	return (concatenated);
}

