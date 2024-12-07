/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:18:17 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/07 03:08:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	manage_i(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_num_len(n));
}

int	manage_u(unsigned int n)
{
	return (ft_putnbr_base(n, "0123456789"));
}

int	manage_x(unsigned int n)
{
	return (ft_putnbr_base(n, "0123456789abcdef"));
}

int	manage_upperx(unsigned int n)
{
	return (ft_putnbr_base(n, "0123456789ABCDEF"));
}
