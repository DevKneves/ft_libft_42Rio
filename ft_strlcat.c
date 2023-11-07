/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:51:09 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 16:12:15 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	is;
	size_t	id;

	id = 0;
	is = 0;
	if ((!dst || !src) && size == 0)
		return (0);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (id < size && dst[id] != '\0')
		id++;
	while (id < size - 1 && src[is] != '\0')
	{
		dst[id] = src[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	while (src[is] != '\0')
	{
		id++;
		is++;
	}
	return (id);
}
/*
int     main()
{
        char    one[] = "i love";
        const char      two[] = "42 rio";
        printf("%ld", ft_strlcat(one, two, 3));
}*/
