/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:41:35 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 19:15:22 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0 && s1[i] != 0 && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "ac";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	return (0);
}*/
