/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:08:30 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/04 21:44:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*merged;

	if (!s1)
		return ((char *) s2);
	if (!s2)
		return ((char *) s1);
	merged = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!merged)
		return (NULL);
	merged[0] = '\0';
	ft_strlcpy(merged, (char *) s1, ft_strlen(s1) + 1);
	ft_strlcpy(merged + ft_strlen(s1), (char *) s2, ft_strlen(s2) + 1);
	return (merged);
}
