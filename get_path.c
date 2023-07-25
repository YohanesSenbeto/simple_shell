#include "main.h"

/**
<<<<<<< HEAD
* _get_path - gets the path.
* @env: Environment variable.
* Return: Path.
*/

char *_get_path(char **env)
{
size_t new_index = 0, variable = 0, length = 5;
char *path = NULL;

for (new_index = 0; strncmp(env[new_index], "PATH=", 5); new_index++)
;
if (env[new_index] == NULL)
return (NULL);

for (length = 5; env[new_index][variable]; variable++, length++)
;
path = malloc(sizeof(char) * (length + 1));

if (path == NULL)
return (NULL);

for (variable = 5, length = 0; env[new_index][variable]; variable++, length++)
path[length] = env[new_index][variable];

path[length] = '\0';
return (path);
=======
 * _get_path - gets the path.
 * @env: Environment variable.
 * Return: Path.
 */

char *_get_path(char **env)
{
    size_t new_index = 0, variable = 0, length = 5;
    char *path = NULL;

    for (new_index = 0; _strncmp(env[new_index], "PATH=", 5); new_index++)
        ;
    if (env[new_index] == NULL)
        return (NULL);

    for (length = 5; env[new_index][variable]; variable++, length++)
        ;
    path = malloc(sizeof(char) * (length + 1));

    if (path == NULL)
        return (NULL);

    for (variable = 5, length = 0; env[new_index][variable]; variable++, length++)
        path[length] = env[new_index][variable];

    path[length] = '\0';
    return (path);
>>>>>>> 56488b139e1c7a96ed30f36e09a2b3e9dc1727d2
}

