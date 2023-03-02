#include "main.h"
/**
*cap_string - capitalizes all words of a string.
*@str: the string
*Return: the string
*/
char *cap_string(char *str)
{
	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == '.' || str[i] == ' ')
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;

		if (str[i] == '?' || str[i] == '!' || str[i] == ';' || str[i] == ',')
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;

		if (str[i] == '"' || str[i] == '(' || str[i] == ')')
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;

		if (str[i] == '{' || str[i] == '}')
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
	}

	return (str);
}
