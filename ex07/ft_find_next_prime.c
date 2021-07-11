/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:15:07 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 16:26:36 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime((unsigned int)nb, 2));
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	int				no_enc;

	i = (unsigned int)nb;
	no_enc = 1;
	while (no_enc)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
