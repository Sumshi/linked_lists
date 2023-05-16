#include "main.h"
void handle_input_redirection(char **args)
{
	int input_fd = open(args[0], O_RDONLY);
	if (input_fd == -1)
	{
		perror("open error");
		exit(98);
	}
	if (dup2(input_fd, STDIN_FILENO) == -1)
	{
		perror("dup2 error");
		exit(98);
	}
	close(input_fd);
}

void handle_output_redirection(char **args)
{
	int output_fd = open(args[0], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (output_fd == -1)
	{
		perror("open error");
		exit(98);
	}
	if (dup2(output_fd, STDOUT_FILENO) == -1)
	{
		perror("dup2 error");
		exit(98);
	}
	close(output_fd);
}
