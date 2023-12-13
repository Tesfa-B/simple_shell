#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two string
 * @str1: string one
 * @str2: string two
 * Return: result
 */
int _strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
