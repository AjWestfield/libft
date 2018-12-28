/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awestfie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:25:39 by awestfie          #+#    #+#             */
/*   Updated: 2018/11/26 15:25:55 by awestfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = dst;
	ptr2 = (char *)src;
	i = -1;
	while (++i < n)
		*(ptr + i) = *(ptr2 + i);
	return (dst);
}
