#include <stdio.h>
/**
 *_strchr - locates a character @c in a string @s
 *@s: the reference to string
 *@c: the character to locate in th
 *Return: Null if not found otherwise th
 */
char *_strchr(char *s, char c)
{
	for (; *s && *s != c; s++)
		;

	return (*s || *s == c  ? s : NULL);
}
