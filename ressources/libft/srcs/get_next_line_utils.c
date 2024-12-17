/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:18:30 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/05 00:51:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	rank_in(const char *str, char c)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strdup(const char *src)
{
	int			i;
	char		*ptr;

	if (!src)
		return (NULL);
	i = -1;
	ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i++, src[i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*src;
	size_t					i;

	if (!destination && !source)
		return (destination);
	dest = (unsigned char *) destination;
	src = (unsigned char *) source;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}

char	*ft_allocplus(char *buffer, size_t size)
{
	char	*new_buffer;
	size_t	n;

	if (!buffer)
	{
		buffer = malloc(1);
		if (!buffer)
			return (NULL);
		buffer[0] = '\0';
	}
	n = ft_strlen(buffer);
	new_buffer = malloc(n + size + 1);
	if (!new_buffer)
		return (NULL);
	ft_memcpy(new_buffer, buffer, n);
	free(buffer);
	buffer = NULL;
	new_buffer[n] = '\0';
	return (new_buffer);
}
