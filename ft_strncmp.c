/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:22:23 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 18:22:24 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *s1_char;
	unsigned char *s2_char;

	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	if (n == 0)
		return (0);
	n--;
	while (n-- && *s1_char && *s2_char &&
		(*s1_char == *s2_char))
	{
		s1_char++;
		s2_char++;
	}
	return (*s1_char - *s2_char);
}
