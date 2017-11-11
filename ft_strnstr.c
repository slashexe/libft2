#include "libft.h"

char *strnstr(const char *s1, const char *s2, size_t n)
{
	size_t size;

	if (!*s2 || !n)
		return (s1);
	size = ft_strlen(s2);
	while(n-- >= size)
	{
		if (ft_memcmp(s1++, s2, size) == NULL)
			return (s1 - 1);
	}
	return (0);
}