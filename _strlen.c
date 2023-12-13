#include "main.h"
/**
 * _strlen - countes string length
 * @str: string
 * Return: sring length
 */
int  _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

