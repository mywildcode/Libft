/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:36:01 by ql-eilde          #+#    #+#             */
/*   Updated: 2014/11/05 11:41:58 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	int		i;

	i = c;
	if (i >= 0 && i <= 127)
	{
		return (1);
	}
	else
		return (0);
}
