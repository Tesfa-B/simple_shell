#include "main.h"
/**
 * _strcat - concatenates string
 * @dest: destination
 * @src: source
 * Return: the concatenated string
 */
char *_strcat(char *dest, const char *src)
{
	/* Check for null pointers */
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	/*  Find the null terminator of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}
	/* Copy characters from source to the end of destination */
	while ((*dest++ = *src++) != '\0')
	{
		/*Copy until the null terminator is encountered */
	}
	return (dest);
}
