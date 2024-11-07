/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:01:13 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 18:38:04 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (*(unsigned char *)s != '\0' && (int)n > i)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void*)(s));
		i++;
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((void*)(s));
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	arr[] = "hello";
	char	*i;

	i = ft_memchr(arr, 'l', 5);
	printf("%s", i);
	return (0);
}*/
