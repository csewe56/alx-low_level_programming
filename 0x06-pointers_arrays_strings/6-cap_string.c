#include <stddef.h>  /* Include this header for NULL definition */

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1; /* next character should be capitalized */

	while (str[i] != '\0')
	{
		/* Check if the current character is a word separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = 1;
		}
		/* Check if the current character is an alphabet character */
		else if ((str[i] >= 'a' && str[i] <= 'z') && capitalize_next)
		{
			/* Capitalize the current character */
			str[i] = str[i] - 'a' + 'A';
			capitalize_next = 0; /* Reset the flag */
		}
		else
		{
			capitalize_next = 0; /* Reset the flag */
		}

		i++;
	}

	return (str);
}

