/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:19:55 by marvin            #+#    #+#             */
/*   Updated: 2024/12/04 21:43:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	fill_buffer(char *buffer, int i, int n)
{
	while (n > 0)
	{
		buffer[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	return (i);
}

static int	count_digits(int n)
{
	int	counter;

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

char	*exceptions(int n)
{
	char	*buffer;

	buffer = NULL;
	if (n == 0)
		buffer = ft_strdup("0");
	else if (n == -2147483648)
		buffer = ft_strdup("-2147483648");
	if (!buffer)
		return (NULL);
	return (buffer);
}

char	*ft_itoa(int n)
{
	char		*buffer;
	int			i;
	int			is_negative;

	if (n == 0 || n == -2147483648)
		return (exceptions(n));
	buffer = malloc((count_digits(n) + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	i = ((is_negative = 0));
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	i = fill_buffer(buffer, i, n);
	if (is_negative)
	{
		buffer[i] = '-';
		i++;
	}
	buffer[i] = '\0';
	ft_strrev(buffer);
	return (buffer);
}
