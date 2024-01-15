#include "main.h"

int stringlen(char *str);

/**
 * strtow - splits a string into words
 * @str: the string to be splitted
 *
 * Return: pointer to an array of strings, else NULL
 */
char **strtow(char *str)
{
	int i, j, k = 0, wcount = 0, state = 0;
	char **thearray;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++wcount;
		}
	}

	thearray = malloc((wcount + 1) * sizeof(char *));

	if (thearray == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			for (j = 0; str[i] != ' '; j++, i++)
				;
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				state = 0;
			thearray[k] = malloc((j + 1) * sizeof(char));
			k++;
		}
	}
	thearray[wcount] = NULL;

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			for (j = 0; str[i] != ' '; j++, i++)
				thearray[k][j] = str[i];
			thearray[k][j] = '\0';
			k++;
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				state = 0;
		}
	}

	return (thearray);
}
