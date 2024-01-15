#include "main.h"

int stringlen(char *str);

/**
 * argstostr - concatenates all the elements of a char array and adds new line
 * behind every element
 * @ac: the number of arguments
 * @av: the array of char
 *
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, sum = 0;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		sum += stringlen(av[i]);

	sum += ac;
	new = malloc((sum) * sizeof(char));
	if (new == NULL)
		return (NULL);

	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i][j];
			k++;
		}
		new[k] = '\n';
		k++;
	}
	new[k] = '\0';

	return (new);
}

/**
 * stringlen - return the length of a string
 * @str: pointer to char
 *
 * Return: int
 */
int stringlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; *str != '\0'; i++)
		str++;

	return (i);
}
