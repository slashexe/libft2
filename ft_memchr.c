#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*in = s;

	if (!s)
		return(NULL);
	while (n-- && *in != 'c')
	{
		*in++;
	}
	if (n == 0)
		return (NULL);
	return(in);
}