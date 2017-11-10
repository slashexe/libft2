#include "libft.h"

int		ft_tolowerr(int c)
{
	if(ft_isupper(c))
		return (c + 'a' - 'A');
	return (c);
}