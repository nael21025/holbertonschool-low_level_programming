#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * close_fd - close a file descriptor and handle error
 * @fd: file descriptor
 */
static void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_usage - print usage error and exit
 * @prog: program name
 */
static void error_usage(const char *prog)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", prog);
	exit(97);
}

/**
 * error_read - print read error and exit
 * @file: file name
 * @fd_from: fd to close, or -1
 * @fd_to: fd to close, or -1
 */
static void error_read(const char *file, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	if (fd_from != -1)
		close_fd(fd_from);
	if (fd_to != -1)
		close_fd(fd_to);
	exit(98);
}

/**
 * error_write - print write error and exit
 * @file: file name
 * @fd_from: fd to close, or -1
 * @fd_to: fd to close, or -1
 */
static void error_write(const char *file, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	if (fd_from != -1)
		close_fd(fd_from);
	if (fd_to != -1)
		close_fd(fd_to);
	exit(99);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_usage(argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_read(argv[1], -1, -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_write(argv[2], fd_from, -1);

	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			error_write(argv[2], fd_from, fd_to);
	}

	if (r == -1)
		error_read(argv[1], fd_from, fd_to);

	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
