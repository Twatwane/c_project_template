/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:40:46 by marvin            #+#    #+#             */
/*   Updated: 2024/11/16 19:40:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*src_elem;
	t_list	*new;
	void	*result;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	src_elem = lst;
	while (src_elem)
	{
		result = f(src_elem->content);
		new = ft_lstnew(result);
		if (!new)
		{
			ft_lstclear(&new_lst, del);
			if (result)
				del(result);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		src_elem = src_elem->next;
	}
	return (new_lst);
}
