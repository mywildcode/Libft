/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:33:33 by ql-eilde          #+#    #+#             */
/*   Updated: 2014/11/12 11:54:05 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void set_nb(char const *s, char c, int *nb)
{
    int     i1;
    int     i2;

    i1 = 0;
    i2 = 0;
    while (s[i1] != '\0')
    {
        if (i1 == i2 && s[i1] == c)
        {
            i1++;
            i2++;
        }
        else
        {
            if (s[i2] == c || s[i2] == '\0')
            {
                (*nb)++;
                i1 = i2;
            }
            else
                i2++;
        }
    }
}

static void fill_tab(char const *s, char c, char **tab, int index)
{
    int     i1;
    int     i2;

    i1 = 0;
    i2 = 0;
    while (s[i1] != '\0')
    {
        if (i1 == i2 && s[i1] == c)
        {
            i1++;
            i2++;
        }
        else
        {
            if (s[i2] == c || s[i2] == '\0')
            {
                tab[index++] = ft_strsub(s, i1, i2 - i1);
                i1 = i2;
            }
            else
                i2++;
        }
    }
}

char        **ft_strsplit(char const *s, char c)
{
    char    **tab;
    int     nb;

    tab = NULL;
    if (s)
    {
        nb = 0;
        set_nb(s, c, &nb);
        tab = (char **) malloc(sizeof(char *) * (nb + 1));
        if (tab)
        {
            tab[nb] = NULL;
            fill_tab(s, c, tab, 0);
        }
    }
    return (tab);
}