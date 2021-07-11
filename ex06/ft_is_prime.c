/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:48:51 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 02:57:36 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div;

	i = 2;
	div = 0;
	if (nb == 0 || nb < 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		div = nb % i;
		if (i < nb && div == 0)
			return (0);
		i++;
	}
	return (1);
}
