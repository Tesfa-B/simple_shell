#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * loc - find the location of the given path
 * @path: given path
 * @argv: command
 * Return: if success
 */
char *loc(char *path, char *argv)
{
	char *cpy_path, *path_alloc, *token;
	char *delim = ":";

	cpy_path = strdup(path);
	token = strtok(cpy_path, delim);

	while (token != NULL)
	{
		path_alloc = malloc(_strlen(token) + _strlen(argv) + 2);
		if (path_alloc == NULL)
		{
			perror("malloc error");
			exit(EXIT_FAILURE);
		}
		_strcpy(path_alloc, token);
		_strcat(path_alloc, "/");
		_strcat(path_alloc, argv);

		if (access(path_alloc, X_OK) == 0)
		{
			free(cpy_path);  /* Free the copied path before returning */
			return (path_alloc);
		}
		free(path_alloc);  /* Free the allocated path before getting the next one */
		token = strtok(NULL, delim);
	}
	free(cpy_path);
	return (NULL);
}
/**
 * get_path - get the location of path
 * @argv: env
 * Return: if success 0
 */
char *get_path(char *argv)
{
	char *path = getenv("PATH");

	if (path)
	{
		return (loc(path, argv));
	}
	return (NULL);
}
