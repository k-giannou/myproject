/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:36:08 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 16:41:07 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	return (c - 32);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	return (0);
}*/
