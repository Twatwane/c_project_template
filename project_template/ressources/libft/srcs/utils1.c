/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:26:11 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/07 03:08:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putnbr_base(unsigned long long n, const char *base)
{
	unsigned int	base_len;
	int				counter;

	counter = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	if (n == 0)
	{
		write(1, &base[0], 1);
		return (1);
	}
	if (n >= base_len)
		counter += ft_putnbr_base(n / base_len, base);
	write(1, &base[n % base_len], 1);
	return (counter + 1);
}

int	manage_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	manage_s(const char *str)
{
	if (!str)
		str = "(null)";
	ft_putstr_fd((char *) str, 1);
	return (ft_strlen(str));
}

int	manage_p(void *ptr)
{
	unsigned long long	addr;

	addr = (unsigned long long)ptr;
	if (addr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	return (2 + (ft_putnbr_base(addr, "0123456789abcdef")));
}

int	manage_d(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_num_len(n));
}
