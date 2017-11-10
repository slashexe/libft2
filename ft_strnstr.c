#include "libft.h"

char *strnstr(const char *s1, const char *s, size_t len)
{
	size_t size;

	if (!*s2 || !len)
		return (s1);
	size = ft_strlen(s2);
	while(len-- >= size)
	{
		if (ft_memcmp(s1++, s2, size) == NULL)
			return (s1 - 1);
	}
	return (0);
}