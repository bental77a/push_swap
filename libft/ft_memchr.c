/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:00:24 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/08 11:53:48 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*d;

	d = s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (char)c)
		{
			return ((void *)&d[i]);
		}
		i++;
	}
	return (NULL);
}
