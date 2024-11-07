/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:06:10 by kgiannou          #+#    #+#             */
/*   Updated: 2024/11/06 20:22:01 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <libft.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dest = (void *)malloc(nmemb * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
