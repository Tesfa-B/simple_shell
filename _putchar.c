#include <unistd.h>
/**
 * _putchar - prints character
 * @c: the character
 * Return: if success prints the char
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
