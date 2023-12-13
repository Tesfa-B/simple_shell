#include "main.h"
#include "string.h"
#include "stdlib.h"
/**
 * handle_env - prints enviorment
 */
void handle_env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		char *env_var_name = environ[i];
		char *env_var_value = getenv(env_var_name);
	if (env_var_value != NULL)
	{
		_print_string(env_var_name);
		_putchar('=');
		_print_string(env_var_value);
		_putchar('\n');
	}
	}
}
/**
 * handle_cd - handles changing directory
 * @path: command  argument
 */
void  handle_cd(const char *path)
{
	if (chdir(path) != 0)
	{
		perror("cd\n");
	}
	else
	{
		_print_string("---");
	}
}
/**
 * builtin - checks for builtin command
 * @arg: toeknized command
 * Return: if success 0
 */
int builtin(char **arg)
{
	const char *path;

	if (_strcmp(arg[0], "exit") == 0)
	{
		_print_string("shell is exiting\n");
		exit(EXIT_SUCCESS);
	}
	if (_strcmp(arg[0], "cd")  == 0)
	{
		if (arg[1] == NULL)
		{
			_print_string("cd: missng argument\n");
		}
		else
		{
			path = arg[1];
			handle_cd(path);
		}
	}
	else if (_strcmp(arg[0], "env") == 0)
	{
		handle_env();
	}
	else
		_print_string(": command not  found\n");
	return (0);
}
