#include "main.h"
#include <stdio.h>
/**
*_isalpha - check if the char is alphabet or not
*@c: checking charachter
*Return: 1 if alpha
*otherwise Return: 0
*/
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? 1 : 0);
}
