/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:15:33 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/07 09:36:36 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	i = ft_strlen((char *)dst);
	j = 0;
	lend = ft_strlen((char *)dst);
	lens = ft_strlen((char *)src);
	if (size < 1)
		return (lens + lend);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < lend)
		return (lend + size);
	else
		return(lend + lens);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = " string concatenation";
	char	dest[30] = "test";

	printf("%zu %s", ft_strlcat(dest, src, 10), dest);
	return (0);
}*/
