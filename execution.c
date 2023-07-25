<<<<<<< HEAD
#include "main.h"

int sh_exit(char **args);
char *builtin_str[] = {"exit"};
=======
#include "shell.h"

int sh_exit(char **args);
char *builtin_str[] = {"exit"};

>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
int (*builtin_func[])(char **) = {&sh_exit};

/**
 * sh_num_builtins - return the number of builtins.
 * Return: Number of builtins.
 */

int sh_num_builtins(void)
{
<<<<<<< HEAD
return sizeof(builtin_str) / sizeof(char *);
=======
    return (sizeof(builtin_str) / sizeof(char *));
>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
}

/**
 * sh_exit - exit the shell.
 * @args: List of arguments.
 * Return: 0 on success, 1 on failure.
 */
int sh_exit(char **args)
{
<<<<<<< HEAD
(void)args;
free(args);
return (200);
=======
    (void)args;
    free(args);
    return (200);
>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
}

/**
 * _fork_fun - Creates a child process to execute a command.
 * @arg: List of arguments.
 * @av: List of arguments passed to the program.
 * @env: List of environment variables.
 * @lineptr: Pointer to the line buffer.
 * @np: Number of the current process.
 * @c: Flag to check if the command is in the PATH.
 * Return: 0 on success, 1 on failure.
 */
<<<<<<< HEAD
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c){
=======
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c)
{

>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
    pid_t child;
    int stat, i = 0;
    char *format = "%s: %d: %s: not found\n";

    if (arg[0] == NULL)
        return (1);
    for (i = 0; i < sh_num_builtins(); i++)
    {
<<<<<<< HEAD
        if (strcmp(arg[0], builtin_str[i]) == 0)
=======
        if (_strcmp(arg[0], builtin_str[i]) == 0)
>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
            return (builtin_func[i](arg));
    }
    child = fork();
    if (child == 0)
    {
        if (execve(arg[0], arg, env) == -1)
        {
            fprintf(stderr, format, av[0], np, arg[0]);
            if (!c)
                free(arg[0]);
            free(arg);
            free(lineptr);
            exit(errno);
        }
    }
    else
    {
        wait(&stat);
        return (stat);
    }
<<<<<<< HEAD
    {
        return (0);
    }
}
=======
    return (0);
}

>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
