/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:18:02 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 14:42:32 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	const char		*source;
	int				i;

	i = 0;
	if (dest == src || !n)
		return (dest);
	dst = (unsigned char *) dest;
	source = (const char *) src;
	while (n)
	{
		*dst = *source;
		dst++;
		source++;
		n--;
	}	
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[100];
	char	src[45] = "The quick brown fox jumps over the lazy dog.";
	
	ft_memcpy((void *)dest, (const void *)src, 40);
	printf("ftmemcpy %s\n", src);
	return (0);
}
*/
