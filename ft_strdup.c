/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:37:39 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/09 19:39:22 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ans;

	ans = (char *)malloc(sizeof(*ans) * (ft_strlen(s1) + 1));
	if (ans != NULL)
		ft_strlcpy(ans, s1, ft_strlen(s1) + 1);
	else
	{
		free(ans);
		return (NULL);
	}
	return (ans);
}
