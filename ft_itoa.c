/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:30:57 by kneves            #+#    #+#             */
/*   Updated: 2023/11/07 14:54:59 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_checknmb(int nb)
{
	int	size;

	size = 0;
	if (nb <= 0)
		size++;
	while (nb != 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	i = ft_checknmb(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (str[0] == '-')
			str[i--] = '0' + -(n % 10);
		else
			str[i--] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}
