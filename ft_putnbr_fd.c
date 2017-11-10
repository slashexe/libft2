#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int i;

	i = n;
	if (i < n)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	else
		ft_putchar_fd(i + '0', fd);
}