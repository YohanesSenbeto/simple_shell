#include "main.h"

/**
* main - Entry point
* @ac: Count of arguments
* @av: Arguments
* @env: Environment variables
* Return: 0 on success
*/

int main(int ac, char **av, char **env)
{
int pathValue = 0, stat = 0, is_path = 0;
char *input_string = NULL,/**ptr to inpt*/**cmds_array = NULL; /**ptr to arr*/
(void)ac;
while (1) /**infinite loop*/
{
errno = 0;
input_string = _getline_command(); /**gets input*/
if (input_string == NULL && errno == 0)
return (0);
if (input_string)
{
pathValue++;
cmds_array = tokenize(input_string); /**tokenizes input*/
if (!cmds_array)
free(input_string);
if (!strcmp(cmds_array[0], "env")) /**checks if command is env*/
{
	const char *desired_var = "getenv";
	char *value = getenv(desired_var);
	if  (value != NULL)
	{
		printf("%s=%s\n", desired_var, value);
	}
}
else
{
is_path = _values_path(&cmds_array[0], env);/**checks if cmd the path*/
stat = _fork_fun(cmds_array, av, env, input_string, pathValue, is_path);
if (stat == 200)
{
free(input_string);
return (0);
}
if (is_path == 0)
free(cmds_array[0]);
}
free(cmds_array); /** frees commands_array*/
}
else
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1); /**prints new line*/
exit(stat);
}
free(input_string);
}
return (0);
}

