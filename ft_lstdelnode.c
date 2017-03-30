/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 18:47:36 by bmontoya          #+#    #+#             */
/*   Updated: 2017/03/17 18:48:05 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelnode(t_list **head, t_list *node)
{
	t_list *tmp;

	if (*head == node)
		*head = (*head)->next;
	else
	{
		tmp = *head;
		while (tmp->next != 0 && tmp->next != node)
			tmp = tmp->next;
		if (tmp->next == 0)
			return ;
		tmp->next = tmp->next->next;
	}
	free(node);
}
