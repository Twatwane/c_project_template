/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/12/04 21:43:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char	*memptr;
	size_t			i;

	memptr = (unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		if (memptr[i] == (unsigned char) value)
			return ((void *)&memptr[i]);
		i++;
	}
	return (NULL);
}
