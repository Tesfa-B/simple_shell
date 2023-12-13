#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: copied string
 */
char *_strcpy(char *dest, const char *src)
{
	char *dest_start;
	/* Check for null pointersi */
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	/* Copy characters from source to destination */
	dest_start = dest;

	while ((*dest++ = *src++) != '\0')
	{
		/*Copy until the null terminator is encountered */
	}
	return (dest_start);
}
