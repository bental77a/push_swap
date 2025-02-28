/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:27:17 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/07 21:52:59 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len_s;
	int		i;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len_s + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
