/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:02:48 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/07 17:11:00 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_words(char *s, char c)
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			sum++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (sum);
}

char	*ft_copy(char *dest, char *s, char c)
{
	int	sum;
	int	i;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		sum++;
	}
	if (sum != 0)
	{
		dest = (char *)malloc(sum + 1);
		if (dest == NULL)
			return (NULL);
		i = 0;
		while (sum >= i)
		{
			dest[i] = s[sum - i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

char	**ft_split(char const *s, char c)
{
	int	sum;
	int	words;
	int	i;
	char	**dest;

	words = ft_words(s, c);
	dest = (char **)malloc((words + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		dest[i] = ft_copy(dest[i], s, c);
		i++;
	}
	dest[i] = malloc(sizeof(char));
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s[] = "----1-2-3-44444-5";
	char	c;
	char	**dest;

	c = '-';
	dest = ft_split(s, c);
	printf("%s\n", dest[2]);
	return (0);
}
