#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;

	ret = dest;
	while (*src && n--)
		*dest++ = *src++;
	if (n != 0)
		ft_bzero(dest, n);
	return (ret);
}