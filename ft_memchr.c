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
	unsigned char *s_char;

	s_char = (unsigned char *)s;
	n--;
	while (n--)
	{
		if (*s_char == (unsigned char)c)
			return ((void *)s_char);
		s_char++;
	}
	return (NULL);
}
