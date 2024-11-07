/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:16:26 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/07 09:43:47 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenlittle;

	if (*little == '\0')
		return ((char *)big);
	lenlittle = 0;
	while (little[lenlittle]!= '\0')
		lenlittle++;
	while (len >= lenlittle && *big != '\0')
	{
		if (*big == *little && ft_memcmp(big, little, lenlittle) == 0)
			return (big);
		big++;
		lenlittle--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	big[] = "foo bar baz";
	char	little[] = "bar";

	printf("%s\n", ft_strnstr(big, little, 10));
	return (0);
}
*/
