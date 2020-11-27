/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:07:43 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/22 20:07:46 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (*s)
	{
		if (*s == c)
			n = 1;
		if (*s != c && n == 1)
		{
			n = 0;
			i++;
		}
		s++;
	}
	return (i);
}

static int		word_len(char const *s, int start, char c)
{
	unsigned int	len;

	len = 0;
	while (s[start] && s[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}

static char		**free_all(char **str)
{
	while (*str)
		free(*str++);
	free(str);
	return (NULL);
}

static char		**main_part(char **str, char const *s, char c, int count)
{
	int	start;
	int	i;

	start = 0;
	i = 0;
	while (count > 0)
	{
		while (s[start] == c && s[start])
			start++;
		str[i] = ft_substr(s, start, word_len(s, start, c));
		if (!(str[i]))
			return (free_all(str));
		i++;
		start += word_len(s, start, c);
		count--;
	}
	str[i] = NULL;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	int		count;
	char	**str;

	if (!(s))
		return (NULL);
	count = word_count(s, c);
	str = (char**)malloc(sizeof(*str) * (count + 1));
	if (!str)
		return (NULL);
	str = main_part(str, s, c, count);
	return (str);
}
