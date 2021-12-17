/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:34:48 by kshantay          #+#    #+#             */
/*   Updated: 2021/10/22 15:55:05 by kshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	run;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	run = 0;
	if (dstsize <= len_dst)
		len_src = len_src + dstsize;
	else
		len_src = len_src + len_dst;
	if (dstsize > len_dst)
	{
		while (src[run] != '\0' && len_dst < dstsize - 1)
		{
			dst[len_dst] = src[run];
			len_dst++;
			run++;
		}
		dst[len_dst] = '\0';
	}
	return (len_src);
}
