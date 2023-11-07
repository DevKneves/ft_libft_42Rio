/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:58:17 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 12:19:20 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!pointer)
		return (NULL);
	while (src[i] != '\0')
	{
		pointer[i] = src[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
