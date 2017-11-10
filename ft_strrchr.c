#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = 0;
	while (*s != (char)c)
	{
		if (!*s++)
			return (ret);
	}
	return ((char *)*s);
}