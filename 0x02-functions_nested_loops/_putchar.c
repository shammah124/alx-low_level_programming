#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
void print_alphabet(void);
void print_alphabet_x10(void);
/**
* print_alphabet - print void
* return 0 upon success
*
* void print_alphabet(void)
* {
* return (write(void));
* }
*/
