/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:25:52 by marvin            #+#    #+#             */
/*   Updated: 2024/12/04 21:44:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (is_in(set, s1[start]) && s1[start])
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && is_in(set, s1[end]))
		end--;
	dest = (char *) malloc((end - start + 2) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strncpy(dest, &s1[start], end - start + 1);
	dest[end - start + 1] = '\0';
	return (dest);
}
