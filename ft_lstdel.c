#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
	{
		ft_listdel(&(*alst)->next, del);
	}
	ft_listdelone(alst, del);
}