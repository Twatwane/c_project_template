/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:00:08 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/07 03:07:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	nb_minus_signs;
	int	result;

	i = 0;
	result = 0;
	nb_minus_signs = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nb_minus_signs++;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (nb_minus_signs % 2 == 1)
		result *= -1;
	return (result);
}
