#include "main.h"
/**
 *_isupper - cheking
 *@c:character
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
