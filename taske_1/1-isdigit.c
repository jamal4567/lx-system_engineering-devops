#include "main.h"
/**
 *_isdigit - check for digit from 0 to 9
 *@c:character for checking
 *Return:1 if is from 0 to 9
 *otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
