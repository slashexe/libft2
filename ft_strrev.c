#include "stdlib.h"


char	*ft_strrev(char *s)
{
	int	c;
	int	n;

	if (s[0] == '-' || s[0] == '+')
		c = 1;
	else
		c = 0;
	n = (ft_strlen(s) - 1);
	while (s[c])
	{
		if (c == n)
			return (s);
		swap(&s[c], &s[n]);
		if (n == c + 1)
			return (s);
		c++;
		n--;
	}
	return (s);
}