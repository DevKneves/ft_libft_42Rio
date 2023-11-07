/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:33:47 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 12:34:47 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*v;

	v = s;
	while (n--)
		*v++ = (unsigned char)c;
	return (s);
}
/*
int	main()
{
	int	t;
	unsigned char	d[12] = "DiogoDefante";
	size_t	q;

	t = '!';
	q = 5;
	ft_memset(d, t, q);
	printf("%s", d);
}*/
