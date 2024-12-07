/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:34:50 by marvin            #+#    #+#             */
/*   Updated: 2024/11/16 18:34:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;
	t_list	*temp;

	n = 0;
	temp = lst;
	if (lst != NULL)
	{
		n = 1;
		while (temp->next != NULL)
		{
			n++;
			temp = temp->next;
		}
	}
	return (n);
}
