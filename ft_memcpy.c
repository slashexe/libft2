#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (n)
	{
		char	*d = dst;
		char	*e = src;

		while (n--)
		{
			*d++ = *e++;
		}
	}
	return (dst);
}