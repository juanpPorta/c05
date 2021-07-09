/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:33:37 by jporta            #+#    #+#             */
/*   Updated: 2021/07/08 16:49:07 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_fibonacci(int index)
{
    int number;

    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    if (index > 1 )
    {
        number = ft_fibonacci(index -1) + ft_fibonacci(index -2);
        return(number);
    }
    else
        return (-1);

}
