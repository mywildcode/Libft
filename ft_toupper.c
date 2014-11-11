/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:48:11 by ql-eilde          #+#    #+#             */
/*   Updated: 2014/11/05 11:56:32 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	int		i;

	i = c;
	if (i >= 'a' && i <= 'z')
	{
		return (i - ' ');
	}
	else
		return (i);
}