#include "main.h"
#include <stdio.h>
/**
* _islower - checks if the charachter is lowercase or not
*@c charachter for checking 
*Return: 1 if lowercase
*otherwise return 0
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}
