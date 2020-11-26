/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:10:02 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/25 20:10:04 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *news)
{
	t_list	*p;
	t_list	*m;

	if (news != NULL && *lst != NULL)
	{
		p = *lst;
		while (p)
		{
			m = p;
			p = p->next;
		}
		m->next = news;
	}
	if (news != NULL && *lst == NULL)
		*lst = news;
}
