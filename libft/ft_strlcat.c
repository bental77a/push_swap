/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:58:54 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/08 15:56:38 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(s);
	if (dstsize == 0)
		return (slen);
	dlen = ft_strlen(d);
	if (dstsize <= dlen)
		return (dstsize + slen);
	i = 0;
	j = dlen;
	while (s[i] && j < dstsize - 1)
	{
		d[j] = s[i];
		j++;
		i++;
	}
	d[j] = '\0';
	return (slen + dlen);
}
