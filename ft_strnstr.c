/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:22:10 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 18:22:15 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *haystack)
	{
		if (*haystack == *needle)
		{
			while (haystack[j] == needle[j] && haystack[j] != '\0' && j < len)
				j++;
			if (needle[j] == '\0')
				return ((char*)haystack);
			j = 0;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
