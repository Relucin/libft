/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 16:56:26 by bmontoya          #+#    #+#             */
/*   Updated: 2017/03/20 17:54:17 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list *thead;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	thead = *alst;
	while (thead->next)
		thead = thead->next;
	thead->next = new;
}
