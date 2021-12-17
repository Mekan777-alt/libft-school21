/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:13:59 by kshantay          #+#    #+#             */
/*   Updated: 2021/10/21 12:24:34 by kshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abc(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

static void	ft_strev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	len;

	is_neg = (n < 0);
	str = ft_calloc(11 + is_neg, sizeof(*str));
	if (str == 0)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + ft_abc(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[len] = '-';
	ft_strev(str);
	return (str);
}
