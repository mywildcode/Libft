/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:42:16 by ql-eilde          #+#    #+#             */
/*   Updated: 2014/11/05 11:47:51 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	int		i;

	i = c;
	if (i >= 32 && i <= 126)
	{
		return (1);
	}
	else
		return (0);
}
