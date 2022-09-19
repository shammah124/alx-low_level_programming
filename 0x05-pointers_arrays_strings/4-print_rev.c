#include "main.h"
/**
* print_rev - this function prints a string in reverse order
* @strg: an input string
* Return: Nothing
*/
void print_rev(char *strg)
{

	int len = 0;

	while (strg[len] != '\0')

		len++;

	while (len)

		_putchar(strg[--len]);

	_putchar('\n');
}


