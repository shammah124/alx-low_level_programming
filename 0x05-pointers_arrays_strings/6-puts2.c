#include "main.h"
/**
* puts2 - this function prints every other character of a string,
* starting with the first character, followed by a new line.
* @strg: An input string
* Return: Nothing
*/
void puts2(char *strg)
{
	int lenGth = 0, x = 0;

	while (strg[lenGth] != '\0')

		lenGth++;

	lenGth -= 1;

	for (; x <= lenGth; x += 2)

		_putchar(strg[x]);

	_putchar('\n');
}


