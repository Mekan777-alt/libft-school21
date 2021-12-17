/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:32:54 by kshantay          #+#    #+#             */
/*   Updated: 2021/10/22 16:36:47 by kshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char *s, char c)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			i++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

static char	ft_strlenword(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static void	*my_free(char **tab, int i)
{
	while (i-- > 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	words = ft_words((char *)s, c);
	tab = (char **)malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_substr((char *)s, 0, ft_strlenword((char *)s, c));
		if (!tab[i])
			return (my_free(tab, i));
		s = s + ft_strlenword((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
