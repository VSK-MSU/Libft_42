/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:47:38 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/24 22:47:40 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int a)
{
	int	ans;

	ans = 0;
	if (a < 0)
		ans++;
	if (a == 0)
		return (1);
	while (a)
	{
		a /= 10;
		ans++;
	}
	return (ans);
}

static char	*set_min_int(char **ans)
{
	*ans = ft_strdup("-2147483648");
	return (*ans);
}

static char	*set_int_null(char **ans)
{
	*ans = ft_strdup("0");
	return (*ans);
}

static char	*set_random(char **ans, int n)
{
	char *ans_adr;

	*ans = (char *)malloc(sizeof(**ans) * int_len(n) + 1);
	if (!(*ans))
		return (NULL);
	ans_adr = *ans;
	if (n < 0)
	{
		n *= -1;
		**ans = '-';
		(*ans)++;
	}
	*ans += int_len(n);
	**ans = '\0';
	(*ans)--;
	while (n)
	{
		**ans = '0' + n % 10;
		(*ans)--;
		n /= 10;
	}
	return (ans_adr);
}

char		*ft_itoa(int n)
{
	char	*ans;

	if (!n)
		return ((ans = set_int_null(&ans)));
	if (n == -2147483648)
		return ((ans = set_min_int(&ans)));
	return ((ans = set_random(&ans, n)));
}
