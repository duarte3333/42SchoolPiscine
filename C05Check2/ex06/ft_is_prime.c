/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:16:15 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/20 11:41:06 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	a;

	if (nb <= 1)
		return (0);
	a = nb;
	i = 0;
	if (nb % 1 == 0)
		i++;
	if (nb % nb == 0)
		i++;
	while (a > 0)
	{
		if ((nb % a == 0) && (a != nb) && (a != 1))
			i++;
		a--;
	}
	if (i == 2)
		return (1);
	return (0);
}
