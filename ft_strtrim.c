/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:24:58 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 12:10:06 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (ft_find(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	i = ft_strlen(s1);
	while (i != 0)
	{
		if (ft_find(s1[i - 1], set) == 1)
			i--;
		else
			break ;
	}
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, (char *)s1, i + 1);
	return (s2);
}
