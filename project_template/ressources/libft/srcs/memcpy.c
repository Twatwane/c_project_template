/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/12/04 21:43:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*src;
	size_t					i;

	if (!destination && !source)
		return (destination);
	dest = (unsigned char *) destination;
	src = (unsigned char *) source;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
