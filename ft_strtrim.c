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

static int	is_contained(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	start_index(char const *s1, char const *set)
{
	char *start;

	start = (char *)s1;
	while (*start && is_contained(*start, set))
		start++;
	return (start - (char *)s1);
}

static int	end_index(char const *s1, char const *set)
{
	char *end;

	end = (char *)s1 + ft_strlen(s1) - 1;
	while (end && is_contained(*end, set))
		end--;
	return (end - (char *)s1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	if (start_index(s1, set) == (int)ft_strlen(s1))
		return (ft_strdup(""));
	ans = (char *)malloc(sizeof(*ans) * (end_index(s1, set) -
		start_index(s1, set) + 2));
	return (ft_substr(s1, start_index(s1, set), end_index(s1, set) -
		start_index(s1, set) + 1));
}
