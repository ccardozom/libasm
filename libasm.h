#ifndef LIBASM_H
#define LIBASM_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buffer, size_t nbytes);
ssize_t	ft_read(int fd, const void *buffer, size_t nbytes);
char	*ft_strdup(const char *s);

#endif
