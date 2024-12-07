/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:22:35 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/07 03:08:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_num_len(int n)
{
	int	counter;

	if (n == -2147483648)
		return (11);
	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}
