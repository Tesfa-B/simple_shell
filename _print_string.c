#include "main.h"
/**
 * _print_string - prints strings to stdo with new line in the end
 * @str: value to be printed
 * Return: if success 0;
 */
char _print_string(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
	p++;
	}
	return (0);
}
