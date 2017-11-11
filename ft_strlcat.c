#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	rest;

	rest = size;
	while (*dst && rest > 0 && rest--)
		dst++;
	while (*src && rest > 1 && rest--)
		*dst++ = *src++;
	if (rest == 1)
		*dst = '\0';
	return (size - rest);
}