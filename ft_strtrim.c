#include "libft.h"

char    *ft_strtrim(char const *s)
{
	char			*ret;
	unsigned int	i;

	ret = ft_stralloc(s);
	if (ret)
	{
		i = 0;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t')
				ret[i++] = *s;
			s++;
		}
		ret[i] = '\0';
	}
	return (ret);
}