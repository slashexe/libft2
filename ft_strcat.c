#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	char *ret;

	ret = dest;
	while (*dest)
		*dest++;
	ft_strcpy(dest, src);
	return (dest);
}