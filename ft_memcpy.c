/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:21:17 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 12:31:43 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int	main()
{
	unsigned char	d[20] = "escola";
	unsigned char	*s;
	size_t	n;

	n = 12;
	ft_memcpy(d, "funcionou perfeitamente", n);
	printf("%s", d);
}*/
