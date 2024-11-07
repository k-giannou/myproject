/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:39:23 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 19:49:35 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;
	long	i;

	sign = 0;
	sum = 0;
	i = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum *10 + str[i] - 48;
		i++;
	}
	if (sign != 0 && sign % 2 != 0)
		sum = sum * -1;
	return (sum);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("---+--+1234ab567"));
	printf("%d\n", ft_atoi("   10"));
	printf("%d\n", ft_atoi("-10"));
	printf("%d\n", ft_atoi("0"));
}*/
