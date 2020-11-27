/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:20:11 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 18:20:14 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*mem_s;

	i = 0;
	mem_s = (unsigned char*)s;
	while (++i <= n)
	{
		if (*(mem_s++) == (unsigned char)c)
			return ((void*)--mem_s);
	}
	return (0);
}
