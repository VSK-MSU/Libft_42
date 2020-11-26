/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:21:54 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 18:21:55 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = NULL;
	while (*((char *)s) != '\0')
	{
		if (*((char *)s) == (char)c)
			tmp = (char *)s;
		s++;
	}
	if (tmp == NULL && (char)c == '\0')
		return ((char *)s);
	return (tmp);
}
