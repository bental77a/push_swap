/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:00:15 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/08 11:54:49 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*dest;
	const unsigned char		*src;

	dest = s1;
	src = s2;
	i = 0;
	while (i < n)
	{
		if (dest[i] != src[i])
			return (((int)(dest[i] - src[i])));
		i++;
	}
	return (0);
}
