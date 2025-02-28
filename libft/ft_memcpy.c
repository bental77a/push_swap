/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:00:07 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/08 12:05:47 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d1;
	const unsigned char	*s1;

	d1 = dst;
	s1 = src;
	if (!d1 && !s1)
		return (0);
	i = 0;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (d1);
}
