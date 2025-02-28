/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:33:45 by mohben-t          #+#    #+#             */
/*   Updated: 2024/11/07 20:51:45 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill(char *str, int n, int index)
{
	int	i;
	int	x;

	x = index;
	i = 1;
	while (n > 0)
	{
		i = n % 10;
		str[index] = i + '0';
		n /= 10;
		index--;
	}
	str[x + 1] = '\0';
}

static char	*check_n_0(int n)
{
	char	*str;

	(void)n;
	str = (char *)malloc(2 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static int	int_lenght(int n)
{
	int	length;
	int	is_negative;

	length = 0;
	is_negative = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	while (n > 0)
	{
		length++;
		n /= 10;
	}
	if (is_negative)
		length++;
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				length;
	int				index;
	long long int	x;

	if (n == 0)
		return (check_n_0(n));
	x = n;
	if (x == -2147483648)
		return (ft_strdup("-2147483648"));
	length = int_lenght(n);
	str = (char *) malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	index = length - 1;
	fill(str, n, index);
	return (str);
}
