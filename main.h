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
char **tokenize(char *lineptr);
extern char *builtin_str[];
int _values_path(char **arg, char **env);
int sh_exit(char **args);
int sh_num_builtins(void);
char *_get_path(char **env);
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c);
char *_getline_command(void);
#endif /* MAIN_H */
