/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:28:30 by rlauret           #+#    #+#             */
/*   Updated: 2017/11/09 17:01:39 by rlauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*d;
	unsigned int	i;

	d = ft_stralloc(s);
	i = 0;
	if (d)
	{
		while (s[i])
		{
			d[i] = f(s[i]);
			i++;
		}
		d[i] = '\0';
	}
	return (d);
}
