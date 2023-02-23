#include "main.h"
#include <stdio.h>
/**
*_islower - chacks if the charachter is lowercase or not 
*Return: 1 if lowercase
*otherwise return 0
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}
