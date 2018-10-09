/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:04:50 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/09 18:15:40 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_foreach(int *tab, int lenght, void(*f)(int))
{
    int i;

    i = 0;
    while (i < lenght)
        f(tab[i++]);
}
