/**
 * print_name - prints a name
 * @name: the string that will be printed
 * @f: function pointer that takes a string statment
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
