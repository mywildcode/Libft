/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:33:33 by ql-eilde          #+#    #+#             */
/*   Updated: 2014/11/11 18:24:48 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static size_t		ft_nb_word(const char *s, char c)
{
	int			i;
	int			j;

	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			++j;
			while (s[i] != c)
			{
				if (!s[i])
					return (j);
				++i;
			}
		}
	}
	return (j);
}

static size_t		ft_len_word(const char *s, unsigned int i, int j, char c)
{
	while (s[i] && s[i] != c)
	{
		++i;
		++j;
	}
	return (j);
}

static int		ft_free(char **tab)
{
	char		**tmp;

	if (tab)
	{
		tmp = tab;
		while (*tmp)
			free(*(tmp++));
		free(tab);
	}
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**ret;
	unsigned int			i;
	int			k;
	int			word;

	if (!s)
		return (NULL);
	word = ft_nb_word(s, c);
	if (!(ret = (char**)malloc(sizeof(char*) * (word + 1))))
		return (NULL);
	i = 0;
	k = -1;
	ret[word] = 0;
	while (++k < word)
	{
		while (s[i] == c)
			++i;
		if (!(ret[k] = ft_strsub(s, i, ft_len_word(s, i, 0, c)))
			&& ft_free(ret))
			return (NULL);
		while (s[i] && s[i] != c)
			++i;
	}
	return (ret);
}