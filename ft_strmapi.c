/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:00:03 by rlauret           #+#    #+#             */
/*   Updated: 2017/11/09 17:04:24 by rlauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*d;
	unsigned int	i;

	d = ft_stralloc(s);
	i = 0;
	if (d)
	{
		while (s[i])
		{
			d[i] = f(i, s[i]);
			i++;
		}
		d[i] = '\0';
	}
	return (d);
}
