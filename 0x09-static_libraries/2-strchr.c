#include "main.h"
#include <stddef.h>
/**
 * _strchr - The entry point
 * @s: enrty point input
 * @c: entry point input
 * Return: Always return 0(success)
 */
char *_strchr(char *s, char c);
{
	int i=0;

	for (; s[i]>= '\0; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
