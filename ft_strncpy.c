#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;

	ret = dst;
	while (*src && n--)
		*dst++ = *src++;
	if (n != 0)
		ft_bzero(dst, n);
	return (ret);
}