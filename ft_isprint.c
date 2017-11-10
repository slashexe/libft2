#include "libft.h"

int		ft_isascii(int c)
{
	return (32 <= c && c <= 126);
}