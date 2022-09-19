#include "main.h"
/**
* swap_int -  this function swaps between two values of integers data types.
* @x: an input integer pointer
* @y: an input integer pointer
* Return: Nothing
*/
void swap_int(int *x, int *y)
{
	int swapper;

	swapper = *x;

	*x = *y;

	*y = swapper;
}


