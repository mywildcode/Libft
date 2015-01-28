/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:17:33 by ql-eilde          #+#    #+#             */
/*   Updated: 2015/01/21 15:52:11 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str, const char *to_find)
{
	size_t		len;

	len = ft_strlen(to_find);
	if (!*to_find)
		return ((char *)str);
	while (*str)
		if (!ft_memcmp(str++, to_find, len))
			return ((char *)--str);
	return (0);
}
