#include "main.h"
/**
 * word_count - function to count words
 *
 * @w: pointer to a string
 *
 * Return: n
*/
int word_count(char *w)
{
	int i, n = 0;

	for (i = 0; w[i]; i++)
	{
		if (w[i] == ' ')
		{
			if (w[i + 1] != '\0' && w[i + 1] != ' ')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * **strtow - function split string
 *
 * @str: pointer to a string
 *
 * Return: word
 *
*/
char **strtow(char *str)
{
	int i, j, num_w, h, l, wc;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_w = word_count(str);
	if (num_w == 1)
		return (NULL);
	word = (char **)malloc(num_w * sizeof(char *));
	if (num_w == 1)
		return (NULL);
	word = (char **)malloc(num_w * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[num_w - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] != ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			word[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (word[wc] == NULL)
			{
				for (h = 0; h < wc; h++)
					free(word[h]);
				free(word[num_w - 1]);
				free(word);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				word[wc][l] = str[j + l];
			word[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (word);
}
