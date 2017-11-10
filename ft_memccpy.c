#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*out = dst;
	char	*in = src;

	while (n-- && *in != 'c')
	{
		*out++ = *in++;
	}
	if (n > 0)
	{
		*out++ = *in++;
		return ((void*)out);
	}
	return (NULL);
}