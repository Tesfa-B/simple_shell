#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

char _putchar(char c);
char _print_string(char *str);
char *get_path(char *argv);
char *loc(char *path, char *argv);
int builtin(char **arg);
void handle_cd(const char *path);
int _strlen(char *str);
int  _strcmp(const char *str1, const char *str2);
char *_strdup(const char *str);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
extern char **environ;

#endif
