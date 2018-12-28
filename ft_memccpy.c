/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awestfie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:22:51 by awestfie          #+#    #+#             */
/*   Updated: 2018/11/26 15:23:19 by awestfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = dst;
	while (++i < n)
	{
		*(ptr + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}
