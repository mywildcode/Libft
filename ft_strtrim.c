/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 20:27:32 by ql-eilde          #+#    #+#             */
/*   Updated: 2014/11/11 18:18:28 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str_debut;
	char	*str_fin;
	int		i;
	int 	j;
	int		len;

	len = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	j = i;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
	str_debut = (char *)malloc(sizeof(char) * len);
	if (!str_debut)
	{
		return (NULL);
	}
	while (s[j + i] != '\0')
	{
		str_debut[i] = s[j + i];
		i++;
	}
	str_debut[i] = '\0';
	while (str_debut[len - 1] == ' ' || str_debut[len - 1] == '\n' || str_debut[len - 1] == '\t')
	{
		len--;
	}
	str_fin = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_fin)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str_fin[i] = str_debut[i];
		i++;
	}
	str_fin[i] = '\0';
	return (str_fin);
}