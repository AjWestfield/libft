/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awestfie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:24:10 by awestfie          #+#    #+#             */
/*   Updated: 2018/11/26 15:24:29 by awestfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
	return (NULL);
}
