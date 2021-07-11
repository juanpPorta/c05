/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 13:32:06 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 16:26:42 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	nb_powe;

	nb_powe = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power >= 0)
	{
		if (power == 0)
			return (1);
		return (nb_powe * ft_recursive_power(nb, power - 1));
	}
	return (nb_powe);
}
