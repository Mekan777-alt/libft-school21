/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:43:22 by kshantay          #+#    #+#             */
/*   Updated: 2021/10/15 18:52:31 by kshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystak, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;

	i = 0;
	if (!haystak || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char *)haystak);
	while (haystak[i] && i < len)
	{
		n_len = 0;
		while (haystak[i + n_len] && needle[n_len]
			&& i + n_len < len && haystak[i + n_len] == needle[n_len])
			n_len++;
		if (!needle[n_len])
			return ((char *)haystak + i);
		i++;
	}
	return (NULL);
}	
