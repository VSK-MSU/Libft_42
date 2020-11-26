/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:05:35 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/02 16:05:35 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	sign;
	int	ans;

	sign = 1;
	ans = 0;
	while (*str == '\f' || *str == '\t' || *str == ' ' ||
	*str == '\n' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		ans *= 10;
		ans += *str - '0';
		str++;
	}
	return (ans * sign);
}
