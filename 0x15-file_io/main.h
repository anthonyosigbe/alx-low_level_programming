#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
