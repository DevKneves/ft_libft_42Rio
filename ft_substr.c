/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:11:28 by kneves            #+#    #+#             */
/*   Updated: 2023/11/06 16:14:25 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main()
{
	const char b[] = "casa do lucas***";
	const char l[] = "lucas";
	char	*result;

	result = ft_substr(b, 8, 7);
	printf("%s\n", result);
}*/
