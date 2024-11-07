/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:57:51 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/07 12:18:01 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		sum;

	i = 0;
	sum = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	dest = (char *)malloc(sum + 1);
	if (dest == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		dest[i] = *s2;
		i++;
		s2++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "hello ";
	char	s2[] = "world";
	char	*new;

	new = ft_strjoin(s1, s2);
	printf("%s\n", new);
	free (new);
	return (0);
}*/
