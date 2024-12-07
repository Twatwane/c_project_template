/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:03:36 by marvin            #+#    #+#             */
/*   Updated: 2024/11/16 19:03:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	elem = *lst;
	while (elem)
	{
		next = elem->next;
		del(elem->content);
		free(elem);
		elem = next;
	}
	*lst = NULL;
}
