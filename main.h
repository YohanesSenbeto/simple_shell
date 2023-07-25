#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

extern char **environ;
<<<<<<< HEAD
char **tokenize(char *lineptr);
extern char *builtin_str[];
int _values_path(char **arg, char **env);
int sh_exit(char **args);
int sh_num_builtins(void);
char *_get_path(char **env);
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c);
char *_getline_command(void);
#endif /* MAIN_H */
=======
int sh_exit(char **args);
char *builtin_str[] = {"exit"};
int (*builtin_func[])(char **) = {&sh_exit};
int sh_exit(char **args);
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c);
void _getenv(char **env);
char *_strcat(char *dest, const char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
size_t _strncmp(char *s1, char *s2, size_t n);
char *_strcpy(char *dest, char *src);
int sh_exit(char **args);
int sh_num_builtins(void)
char *_get_path(char **env)
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c);

#endif /* MAIN_H */

>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
