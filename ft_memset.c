/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:39:41 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 17:12:22 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b_adr;

	b_adr = (unsigned char *)b;
	while (len--)
	{
		*((unsigned char *)b++) = (unsigned char)c;
	}
	return (b_adr);
}
