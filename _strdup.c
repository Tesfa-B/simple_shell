#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicates string
 *@str: string
 *Return: duplicated string pointer
 */
char *_strdup(const char *str)
{
	size_t len = strlen(str) + 1;
	char *new_str = malloc(len);

	if (new_str == NULL)
	{
		/*Memory allocation failed */
		return (NULL);
	}
	return (_strcpy(new_str, str));
}
