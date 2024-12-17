/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:18:55 by marvin            #+#    #+#             */
/*   Updated: 2024/12/04 21:44:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	n;
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	n = ft_strlen(s);
	while (i < n)
	{
		f(i, &s[i]);
		i++;
	}
}
