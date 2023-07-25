#include "main.h"

/**
<<<<<<< HEAD
* _getenv - prints the environment
*
* @env: environment variable to print
*
*/

void _getenv(char **env)
{
size_t runner = 0;

while (env[runner])
{
write(STDOUT_FILENO, env[runner], strlen(env[runner]));
write(STDOUT_FILENO, "\n", 1);
runner++;
}
=======
 * _getenv - prints the environment
 *
 * @env: environment variable to print
 *
 */

void _getenv(char **env)
{
    size_t runner = 0;

    while (env[runner])
    {
        write(STDOUT_FILENO, env[runner], _strlen(env[runner]));
        write(STDOUT_FILENO, "\n", 1);
        runner++;
    }
>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
}

