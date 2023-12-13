#include "main.h"
/**
 * tokenize - tokenize(parse) each line till it becomes NULL
 * @str: the string to be tokenized
 * @delim: the sepatator between the words
 * Return: tokenized string
*/
char **tokenize(char *str, char *delim)
{
	char **argv;
	char *copy1 = _strdup(str),  *copy2 = _strdup(str);
	int num_com = 0, i = 0;

	char *token = strtok(copy1, delim);

	while (token != NULL)
	{
		num_com++;
		token = strtok(NULL, delim);
	}
	argv = malloc((num_com + 1) * sizeof(char *));
	token = strtok(copy2, delim);

	while (token != NULL)
	{
		argv[i] = malloc((_strlen(token) + 1) * sizeof(char));
		_strcpy(argv[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	free(copy1);
	free(copy2);
	return (argv);
}
/**
 *main - handles simple shell functionality
 *Return: if success 0;
 */
int main(void)
{
	char *line = NULL, *path, stream, **argv;
	size_t length;
	int status, i = 0,  child_pid;

	while (1)
	{
		isatty(0) ? _print_string("$") : 0;
		stream = getline(&line, &length, stdin);
		if (stream == -1)
		{
			free(line);
			exit(0);
		}
		if (stream == 1 && line[0] == '\n')
			continue;
		argv = tokenize(line, "   \n\t");
		path = get_path(argv[0]);
		if (path == NULL)
		{
			if (builtin(argv) != 0)
				_print_string("command doesn't exist");
			continue;
		}
		child_pid = fork();
		if (child_pid == -1)
			_print_string("forking error");
		if (child_pid == 0)
		{
			if (execve(path, argv, NULL) == -1)
			{
				exit(EXIT_FAILURE);
			}
		}
			wait(&status);
	for (i = 0; argv[i] != NULL; i++)
		free(argv[i]);
	}
	free(line);
	free(path);
	return (0);
}
