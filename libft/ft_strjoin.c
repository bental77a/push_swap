/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:17:21 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/04 10:28:33 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	i;
	size_t	j;
	size_t	s2_len;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	arr = (char *)malloc(s1_len + s2_len + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		arr[i++] = s2[j++];
	arr[i] = '\0';
	return (arr);
}
