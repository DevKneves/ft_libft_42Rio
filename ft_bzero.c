/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:45:25 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 12:25:22 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*esi;

	esi = (unsigned char *)s;
	while (n--)
		*esi++ = 0;
}
/*
int main()
{
    char minhaCasa[] = "minhacasa";
    size_t m = ft_strlen(minhaCasa);

    ft_bzero(minhaCasa, m);
    printf("%s\n", minhaCasa);

    return 0;
}*/
