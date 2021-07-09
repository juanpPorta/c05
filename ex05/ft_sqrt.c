/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:23:02 by jporta            #+#    #+#             */
/*   Updated: 2021/07/08 16:48:30 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	nb_num;
	int	i;

	i = 1;
	nb_num = nb;
	if (nb < 1)
		return (0);
	while (nb_num <= nb)
	{	
		nb_num = i * i;
		if (nb_num == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
