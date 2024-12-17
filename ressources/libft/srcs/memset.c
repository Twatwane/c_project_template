/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:12:32 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/04 21:43:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*ptr2;

	ptr2 = (unsigned char *) ptr;
	while (n--)
		ptr2[n] = (unsigned char) value;
	return (ptr);
}
