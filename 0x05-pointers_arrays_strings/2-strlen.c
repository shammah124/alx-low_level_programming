#include "main.h"
/**
* _strlen - this function returns the length of a given string.
* @strg: inputed string
* Return: Nothing
*/
int _strlen(char *strg)
{
	int lenGth = 0;

	while (strg[lenGth] != '\0')
		lenGth++;

	return (lenGth);
}
