#include "libft.h"

char *strstr(const char *s1, const char *s2)
{
	size_t size;

	if (!*s2)
		return (NULL);
	size = ft_strlen(s2);
	while(*s1)
	{
		if (ft_memcmp(s1++, s2, size) == NULL)
			return (s1 - 1);
	}
	return (0);
}