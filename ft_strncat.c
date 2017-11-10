#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char *ret;

	ret = dest;
	while (*dest)
		*dest++;
	ft_strncpy(dest, src, n);
	return (dest);
}