/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:27:30 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/04 21:44:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*go_to_where_found(char *str, int i, int j)
{
	if (j > 0)
	{
		str += i - j;
	}
	return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	int			i;
	int			j;
	char		*null_ptr;

	null_ptr = NULL;
	i = 0;
	j = 0;
	if ((str[i] == '\0') && (to_find[i] == '\0'))
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
			j++;
		else
		{
			if (j > 0)
				i--;
			j = 0;
		}
		i++;
		if (to_find[j] == '\0')
			return (go_to_where_found(str, i, j));
	}
	return (null_ptr);
}
