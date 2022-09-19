#include "main.h"
/**
* _puts - this function prints a string with a new line
* @strg: inputed string
* Return: Nothing
*/
void _puts(char *strg)
{
	int x = 0;

	while (strg[x] != '\0')
	{
		_putchar(strg[x]);

		x++;
	}
	_putchar('\n');
}
