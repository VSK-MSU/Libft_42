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
#include <stdio.h>

static int	word_length(char const *s, char delimeter)
{
	int		ans;

	ans = 0;
	while (*s && *s == delimeter)
		s++;
	while (*s && *s != delimeter)
	{
		s++;
		ans++;
	}
	return (ans);
}

static int	words(char const *s, char delimeter)
{
	int		ans;

	ans = 0;
	while (*s)
	{
		while (*s && *s == delimeter)
			s++;
		if (*s)
			ans++;
		while (*s && *s != delimeter)
			s++;
	}
	return (ans);
}

static int	fill_word(char **fill_me, char const **src, char delimeter)
{
	while (**src && **src == delimeter)
		(*src)++;
	*fill_me = ft_substr(*src, 0, word_length(*src, delimeter));
	if (!(*fill_me))
		return (0);
	while (**src && **src != delimeter)
		(*src)++;
	return (1);
}

static void	free_all(char ***split_adr, int subwords)
{
	while (subwords)
	{
		free((*split_adr)[subwords - 1]);
		subwords--;
	}
	free(*split_adr);
	*split_adr = NULL;
}

char		**ft_split(char const *s, char c)
{
	char		**split;
	const char	*s_adr;
	int			check;
	int			i;

	if (!s || !(*s))
		return (NULL);
	s_adr = s;
	i = 0;
	split = (char **)malloc(sizeof(*split) * (words(s, c) + 1));
	check = 0;
	if (split && words(s, c))
	{
		while (words(s, c) && (check = fill_word(&(split[i]), &s, c)))
			i++;
		if (!check)
			free_all(&split, words(s_adr, c) - words(s, c));
		else
			split[i] = NULL;
	}
	else if (split)
		split[i] = NULL;
	return (&(split[0]));
}
