/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:03:55 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 12:30:08 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*ini;

	ini = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			ini = str;
		}
		str++;
	}
	if (c == 0)
	{
		return ((char *)str);
	}
	return ((char *)ini);
}
/*
int	main()
{
	char	l[] = "abacate";
	printf("%s\n", ft_strrchr(l, 'a'));
}*/
