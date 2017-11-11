#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ret == NULL)
		return (NULL);
	else
		ret = ft_strcpy(ret, s1);
	return (ret);
}