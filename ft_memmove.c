/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:51:16 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/07 09:59:18 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const char *s;
	size_t	i;

	if (dest == src || !n)
		return (dest);
	d = (unsigned char *)dest;
	s = (const char *)src;
	i = 0;
	if (*d < *s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(d + n - 1) = *(s + n -1);
			n--;
		}
	}
	return (d);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[45] = "The quick brown fox jumps over the lazy dog.";
	char	dest[100];

	memmove(dest, str, 15);
	//ft_memmove(dest, str, 15);
	printf("memove %s\n", dest);
	return (0);
}
*/
