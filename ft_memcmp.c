#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*in1 = s1;
	char	*in2 = s2;

	while (n--)
	{
		if (*in1 != *in2)
			return (*in1 - *in2);
		else
		{
			*in1++;
			*in2++;
		}
	}
	return (0);
}