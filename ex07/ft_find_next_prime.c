/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:15:07 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 03:07:00 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	div;

	i = 2;
	div = 0;
	if (nb < 0)
	{
		nb = (nb - nb) + 2;
	}
	if (nb == 0 || nb == 1)
		nb = 2;
	while (i <= nb)
	{
		div = nb % i;
		if (i < nb && div == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}
