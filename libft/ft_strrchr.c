/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:57:00 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/08 22:14:23 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*res;

	res = 0;
	while (*s)
	{
		if (*s == (char)c)
			res = (char *)s;
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (res);
}
