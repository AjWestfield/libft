/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awestfie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:38:48 by awestfie          #+#    #+#             */
/*   Updated: 2018/11/26 15:38:59 by awestfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		k;
	int		good;

	if (!ft_strlen(little))
		return ((char *)big);
	i = -1;
	good = 0;
	while (*(big + ++i) && !good)
	{
		if (*(big + i) == *(little + 0))
		{
			j = 0;
			k = i;
			good = 1;
			while (*(little + j))
				if (*(little + j++) != *(big + k++))
					good = 0;
			if (good)
				return ((char *)big + i);
		}
	}
	return (NULL);
}
