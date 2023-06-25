#include "main.h"
/**
 *print_line - print lines
 *
 *@n:number of lines
 */
void print_line(int n)
{
	int i;

	for (i = 1; i < n + 1; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
