#include "main.h"
/**
*leet - encodes a string into 1337.
*@str: the string
*Return: the string encoded
*/
char *leet(char *str)
{
	int i, j;
	char chk[] = "aeotl";
	char replace[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; chk[j] != '\0'; j++)
			if (str[i] == chk[j] || str[i] == (chk[j] - 32))
				str[i] = replace[j];

	return (str);
}
