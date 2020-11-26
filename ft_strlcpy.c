/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:21:05 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 18:21:06 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*dst_adr;
	size_t	ans;

	ans = 0;
	dst_adr = dst;
	if (src == NULL)
		return (0);
	if (dstsize != 0)
	{
		while (*src != '\0' && dstsize - 1)
		{
			*(dst++) = *(src++);
			dstsize--;
			ans++;
		}
		*dst = '\0';
	}
	ans += ft_strlen(src);
	return (ans);
}
