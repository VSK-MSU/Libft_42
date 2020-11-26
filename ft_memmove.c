/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:36:42 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 19:36:45 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *dst_adr;

	dst_adr = (void*)dst;
	if (!len || (unsigned char *)dst == (unsigned char *)src)
		return (dst);
	if ((unsigned char *)dst > (unsigned char *)src)
	{
		dst += len - 1;
		src += len - 1;
		while (len--)
			*((unsigned char *)dst--) = *((unsigned char *)src--);
	}
	else
		while (len--)
			*((unsigned char *)dst++) = *((unsigned char *)src++);
	return (dst_adr);
}
