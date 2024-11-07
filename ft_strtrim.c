/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:19:03 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/07 13:42:49 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_sum(char *s1, char *set)
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	while ((ft_check((char)s1[i], (char *)set) == 1) && (s1[i] != '\0'))
		i++;
	while (ft_check((char)s1[i++], (char *)set) == 0 && s1[i++] != '\0')
		sum++;
	return (sum);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		sum;
	int		k;

	sum = ft_sum((char *)s1, (char *)set);
	dest = (char *)malloc(sum + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (ft_check((char)s1[i], (char *)set) == 1 && s1[i] != '\0')
		i++;
	while (ft_check((char)s1[i], (char *)set) == 0 && s1[i] != '\0')
	{
		dest[k] = s1[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "=----[[hello-=-=";
	char	set[] = "=-[";
	char	*dest;

	dest = ft_strtrim(s1, set);
	printf("%s\n", dest);
	free (dest);
	return (0);
}*/
