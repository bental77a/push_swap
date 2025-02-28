/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:26:45 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/07 20:44:46 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	over_flow_check(const char *str)
{
	int	i;
	int	s;
	int	w;

	i = 0;
	s = 0;
	w = 0;
	while (str[w] == ' ' || (str[w] >= 9 && str[w] <= 13))
		w++;
	while (str[w + s] == '-' || str[w + s] == '+')
		s++;
	if (s > 1)
		return (0);
	while (str[w + s] == '0')
		s++;
	while (str[w + s + i] && (str[w + s + i] >= '0' && str[w + s + i] <= '9'))
		i++;
	if (i > 19 && str[0] != '-')
		return (-1);
	if (i > 19 && str[0] == '-')
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	if (over_flow_check(str) == 0)
		return (0);
	if (over_flow_check(str) == -1)
		return (-1);
	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i++] == '-')
				sign = -sign;
		}
		while (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i++] - '0');
		break ;
	}
	return (result * sign);
}
