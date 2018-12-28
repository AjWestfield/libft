/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awestfie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:36:21 by awestfie          #+#    #+#             */
/*   Updated: 2018/12/13 17:15:01 by awestfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*tmp;

	if (!(tmp = ft_strnew(n)))
		return (NULL);
	ft_strncpy(tmp, s1, n);
	return (tmp);
}
