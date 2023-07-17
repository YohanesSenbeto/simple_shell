<h1> 0x16. C - Simple Shell project</h1>
<h2>General<strong></h2>
  <ul>
Who designed and implemented the original Unix operating system<br>
Who wrote the first version of the UNIX shell<br>
Who invented the B programming language (the direct predecessor to the C programming language)<br>
Who is Ken Thompson<br>
How does a shell work<br>
What is a pid and a ppid<br>
How to manipulate the environment of the current process<br>
What is the difference between a function and a system call<br>
How to create processes<br>
What are the three prototypes of main<br>
How does the shell use the PATH to find the programs<br>
How to execute another program with the execve system call<br>
How to suspend the execution of a process until one of its children terminates<br>
What is EOF / “end-of-file”?<br>
<h1>Copyright - Plagiarism</h1>
<ul>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.<br>
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.<br>
You are not allowed to publish any content of this project.<br>
Any form of plagiarism is strictly forbidden and will result in removal from the program.<br>
  </ul><br>
<h2>Requirements</h2>
<ul>
Allowed editors: vi, vim, emacs<br>
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89<br>
All your files should end with a new line<br>
A README.md file, at the root of the folder of the project is mandatory<br>
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
Your shell should not have any memory leaks<br>
No more than 5 functions per file<br>
All your header files should be include guarded<br>
Use system calls only when you need to (why?)<br>
Write a README with the description of your project<br>
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker<br>
</ul>
</p><br>
<h1>Tasks</h1>
<h4>0. Betty would be proud</h4>
<h3> Write a beautiful code that passes the Betty checks</h3>
<p>Repo: GitHub repository: simple_shell</p>
<p><br>
<h3>1. Simple shell 0.1</h3>
<h3>Write a UNIX command line interpreter.</h3>
Usage: simple_shell
Your Shell should:
  <ul>Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)
You don’t have to:

use the PATH
implement built-ins
handle special characters : ", ', `, \, *, &, #
be able to move the cursor
handle commands with arguments
execve will be the core part of your Shell, don’t forget to pass the environ to it…
</ul>
</p><br>
<h1>2. Simple shell 0.2</h1>
<h4>Simple shell 0.1 +</h4>
<p>Handle command lines with arguments</p><br>
<h1>3. Simple shell 0.3</h1>
<h4>Simple shell 0.2 +</h4>
<p>Handle the PATH</p>
<p>fork must not be called if the command doesn’t exist</p><br>
<h1>4. Simple shell 0.4</h1>
<h4>Simple shell 0.3 +</h4>
<p>Implement the exit built-in, that exits the shell</p>
<p>Usage: exit</p>
<p>You don’t have to handle any argument to the built-in exit</p><br>
<h1>5. Simple shell 1.0</h1>
<h4>Simple shell 0.4 +</h4>
<p>Implement the env built-in, that prints the current environment</p><br>
<h1>6. Simple shell 0.1.1</h1>
<h4>Simple shell 0.1 +</h4>
<ul>Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline
You don’t have to:
be able to move the cursor
</ul><br>
<h1>7. Simple shell 0.2.1</h1>
<h4>Simple shell 0.2 +</h4>
<p>You are not allowed to use strtok</p><br>
<h1>8. Simple shell 0.4.1</h1>
<h4>Simple shell 0.4 +</h4>
<p>handle arguments for the built-in exit
Usage: exit status, where status is an integer used to exit the shell</p><br>
9. setenv, unsetenv
#advanced
Simple shell 1.0 +

Implement the setenv and unsetenv builtin commands

<h2>setenv</h2>
<ul>nitialize a new environment variable, or modify an existing one
Command syntax: setenv VARIABLE VALUE
Should print something on stderr on failure</ul>I
<h2>unsetenv</h2>
<ul>
Remove an environment variable
Command syntax: unsetenv VARIABLE
Should print something on stderr on failure
</ul>
<h1>10. cd</h1>
<h4>Simple shell 1.0 +</h4>
<p>Implement the builtin command cd:

Changes the current directory of the process.
Command syntax: cd [DIRECTORY]
If no argument is given to cd the command must be interpreted like cd $HOME
You have to handle the command cd -
You have to update the environment variable PWD when you change directory
man chdir, man getcwd</p><br>
<h1>11. ;</h1>
<h4>Simple shell 1.0 +</h4>
<p>Handle the commands separator ;</p><br>
<h1>12. && and ||</h1>
<h4>Simple shell 1.0 +</h4>
<p>Handle the && and || shell logical operators</p><br>
<h1>13. alias</h1>
<h4>Simple shell 1.0 +</h4>
<p>Implement the alias builtin command
Usage: alias [name[='value'] ...]
alias: Prints a list of all aliases, one per line, in the form name='value'
alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value</p><br>
<h1>14. Variables</h1>
<h4>Simple shell 1.0 +</h4>
<ul>Handle variables replacement
Handle the $? variable
Handle the $$ variable</ul><br>
<h1>5. Comments</h1>
<h4>Simple shell 1.0 +</h4>
<p>Handle comments (#)</p><br>
<h1>16. File as input</h1>
<h4>Simple shell 1.0 +</h4>
<p>Usage: simple_shell [filename]
Your shell can take a file as a command line argument
The file contains all the commands that your shell should run before exiting
The file should contain one command per line
In this mode, the shell should not print a prompt and should not read from <strong>stdin</strong></p>


