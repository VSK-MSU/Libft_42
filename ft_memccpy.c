/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:14:02 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 20:26:53 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- && *((unsigned char *)src) != (unsigned char)c)
	{
		*((unsigned char *)dst++) = *((unsigned char *)src++);
	}
	if (*((unsigned char *)src) == (unsigned char)c)
	{
		*((unsigned char *)dst) = *((unsigned char *)src);
		return (++dst);
	}
	else
		return (NULL);
}
