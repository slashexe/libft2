#include "libft.h"

int	ft_isspace(int c)
{
	return ((9 <= c && c <= 13) || c == 32);
}