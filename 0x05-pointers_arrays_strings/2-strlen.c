#include "main.h"

/**
 *_strlen - Returns the length of a string.
 * @str: string
 *
 *Return: returns length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) t = '\0')
		len++;

	return (len);
}
