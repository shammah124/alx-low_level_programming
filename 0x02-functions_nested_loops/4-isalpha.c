#include "main.h"
/**
* _isalpha - print alpha if true
* @c: The character to print
* Return: 1 on success
* Return -1 on error
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
