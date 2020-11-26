/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <ezaynabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:12:56 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 20:25:57 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void *dest_adr;

	dest_adr = dest;
	if (!n || (char *)dest == (char *)src)
		return (dest);
	while (n--)
	{
		*((char *)dest) = *((char *)src);
		dest++;
		src++;
	}
	return (dest_adr);
}
