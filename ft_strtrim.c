/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:44:27 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/22 18:44:30 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, *(s1 + start)))
		start++;
	while (start < end && ft_strchr(set, *(s1 + end - 1)))
		end--;
	return (ft_substr(s1, start, end - start));
}
