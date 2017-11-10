#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*out = dst;
	char	*in = src;
	char	tmp[n];
	int		i;

	i = 0;
	while (i < n)
	{
		tmp[i]= in[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		out[i]= tmp[i];
		i++;
	}
	return (out);
}