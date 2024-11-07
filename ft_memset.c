/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:43:05 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/04 15:17:35 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	ch = c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = ch;
		str++;
		n--;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[50] = "hello world hello";

	ft_memset(str, 't', 5);
	printf ("%s", str);
	return (0);
}*/
