#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, word_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		word_count++;
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;
		word_len = 0;
		while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
			word_len++;
		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
	for (j = 0; j < word_len; j++, k++)
		words[i][j] = str[k];
	words[i][j] = '\0';
	}
	words[word_count] = NULL;
	return (words);
}

