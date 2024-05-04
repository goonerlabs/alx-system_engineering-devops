#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int infinite_while(void);

/**
 * main - creates 5 zombie processes
 *
 * Return: 0
 */

int main(void)
{
	pid_t pid;
	int i = 0;

	while (i < 5)
	{
		pid = fork();
		if (pid == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			exit(0);
		}
		i++;
	}
	infinite_while();
	return (0);
}

/**
 * infinite_while - creates an infinite loop
 *
 * Return: 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
