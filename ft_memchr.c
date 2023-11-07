/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:00:23 by kneves            #+#    #+#             */
/*   Updated: 2023/10/25 16:09:19 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (0);
}
/*
int	main()
{
	char	l[] = "rodrigues";
	char	*d = ft_memchr(l, 'd', 8);
	printf("%s", d);
}*/
