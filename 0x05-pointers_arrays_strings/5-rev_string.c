#include "main.h"
/**
* rev_string - this function reverses a string
* @strg: an input string
* Return: Nothing
*/
void rev_string(char *strg)
{
	int lenGth = 0, x = 0;

	char rev;

	while (strg[lenGth] != '\0')

		lenGth++;

	while (x < lenGth--)

	{
		rev = strg[x];

		strg[x++] = strg[lenGth];

		strg[lenGth] = rev;

	}

}
