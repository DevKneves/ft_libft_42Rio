/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:05:00 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 12:23:48 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size > 0)
	{
		size -= 1;
		while (*src && size--)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (len);
}
/*
int	main()
{
	char	destino[20] = "csharp";
	const char	source[20] = "bolada";

	printf("%ld", ft_strlcpy(destino, source, 2));
}*/
