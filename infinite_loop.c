#include "main.h"
/**
 * infinite_loop - prompt infinite user
 * Return: int
 */
int infinite_loop(void)
{
	char *prompt = "(shell)$";
	char *lineptr;
	size_t n = 0;
	ssize_t out;
	/*loop*/
	while (1)
	{
		printf("%s", prompt);
		out = getline(&lineptr, &n, stdin);
		if (out == -1)
		{
			printf("disconnecting..../n");
			return (-1);
		}
		printf("%s", lineptr);
		free(lineptr);
	}
}
