/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:07:30 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/25 18:07:32 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	int		i;

	if (!s)
		return (NULL);
	ans = ft_substr(s, 0, ft_strlen(s));
	if (!ans)
		return (NULL);
	i = 0;
	while (ans[i])
	{
		ans[i] = (*f)(i, ans[i]);
		i++;
	}
	return (ans);
}
