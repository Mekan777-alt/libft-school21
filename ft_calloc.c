/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:07:41 by kshantay          #+#    #+#             */
/*   Updated: 2021/10/20 12:08:31 by kshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total_size;

	tab = NULL;
	total_size = nmemb * size;
	tab = malloc(total_size);
	if (tab != NULL)
		ft_bzero(tab, total_size);
	return (tab);
}
