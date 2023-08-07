#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
char *allocate_temp_buffer(char *file);
void close_file_descriptor(int fd);
void read_write_files(int source_fd, int dest_fd);

#endif
