/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:02:50 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/07 11:57:27 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		sum;
	int		i;

	sum = 0;
	i = 0;
	while (*(s + start + i) != '\0' && (int)len > i)
	{
		sum++;
		i++;
	}
	dest = (char *)malloc(sum + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (*(s + start + i) != '\0' && (int)len > i)
	{
		dest[i] = *(s + start + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char const	s[] = "copy the hello";
	char	*dest;

	dest = ft_substr(s, 8, 6);
	printf("%s\n", dest);
	free (dest);
	return (0);
}
*/
