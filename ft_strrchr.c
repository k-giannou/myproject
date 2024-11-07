/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:19:30 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 17:40:19 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	if (s[len--] == c)
		return ((char *)(s + len));
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	arr[] = "hello good morning";
	char	*i;

	i = ft_strrchr(arr, 'g');
	printf("%s", i);
	return (0);
}*/
