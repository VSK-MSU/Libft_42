/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:20:28 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/11/01 19:29:35 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int				i;
	unsigned char	*a_1;
	unsigned char	*a_2;

	a_1 = (unsigned char *)arr1;
	a_2 = (unsigned char *)arr2;
	i = 0;
	while (i < (int)n)
	{
		if (*a_1 != *a_2)
			return (*a_1 - *a_2);
		a_1++;
		a_2++;
		i++;
	}
	return (0);
}
