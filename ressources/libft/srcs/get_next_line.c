/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:18:26 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/05 00:51:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*get_first_line(char	*buffer)
{
	int		rank;
	char	*line;

	rank = rank_in(buffer, '\n');
	if (rank == -1)
	{
		line = ft_strdup(buffer);
		return (line);
	}
	line = malloc(rank + 2);
	if (!line)
		return (NULL);
	ft_memcpy(line, buffer, rank + 2);
	line[rank + 1] = '\0';
	return (line);
}

char	*cut_first_line(char	*buffer)
{
	int		rank;
	int		n;
	char	*new_buffer;

	rank = rank_in(buffer, '\n');
	n = ft_strlen(buffer);
	if ((rank == -1) || (rank == n - 1))
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	new_buffer = malloc(n - rank);
	if (!new_buffer)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	ft_memcpy(new_buffer, &buffer[rank + 1], n - rank);
	free(buffer);
	buffer = NULL;
	return (new_buffer);
}

char	*initialize_and_validate(int fd, char *stock)
{
	if (!stock)
	{
		stock = malloc(1);
		if (!stock)
			return (NULL);
		stock[0] = '\0';
	}
	if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
	{
		free(stock);
		stock = NULL;
		return (NULL);
	}
	return (stock);
}

char	*read_and_stock(int fd, char *stock)
{
	char	*buffer;
	int		bytes_read;

	stock = initialize_and_validate(fd, stock);
	if (!stock)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
	{
		free(stock);
		stock = NULL;
	}
	while (buffer && rank_in(stock, '\n') == -1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		stock = ft_allocplus(stock, bytes_read);
		if (!stock)
			break ;
		ft_memcpy(&stock[ft_strlen(stock)], buffer, bytes_read + 1);
	}
	free(buffer);
	return (stock);
}

char	*get_next_line(int fd)
{
	static char	*stock;
	char		*line;

	stock = read_and_stock(fd, stock);
	if (!stock)
		return (NULL);
	line = get_first_line(stock);
	if (!line || ft_strlen(line) == 0)
	{
		free(line);
		free(stock);
		stock = NULL;
		return (NULL);
	}
	stock = cut_first_line(stock);
	return (line);
}
