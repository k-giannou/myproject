/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:52:43 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 19:12:00 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	unsigned char	*str1, *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((int)n > i && str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
	{
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "bbc";

	printf("%d\n", ft_memcmp(s1, s2, 3));
	return (0);
}*/
