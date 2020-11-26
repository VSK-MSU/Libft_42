/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:21:16 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 18:21:17 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	run;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	run = 0;
	if (size <= len_dst)
		len_src = len_src + size;
	else
		len_src = len_src + len_dst;
	if (size > len_dst)
	{
		while (src[run] != '\0' && len_dst < size - 1)
		{
			dst[len_dst] = src[run];
			len_dst++;
			run++;
		}
		dst[len_dst] = '\0';
	}
	return (len_src);
}
