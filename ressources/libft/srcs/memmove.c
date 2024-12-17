/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:00:08 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/04 21:43:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*src;
	size_t					i;

	if (!destination && !source)
		return (destination);
	dest = (unsigned char *) destination;
	src = (unsigned char *) source;
	i = 0;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			dest[i - 1] = src[i - 1];
			i--;
		}
		return (destination);
	}
	else
	{
		while (i++, i <= n)
			dest[i - 1] = src[i - 1];
		return (destination);
	}
}
