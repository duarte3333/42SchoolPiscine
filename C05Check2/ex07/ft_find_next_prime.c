/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:02:36 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/20 11:44:18 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_find_next_prime(int nb)
{
	if (nb >= 2147483629)
		return (2147483647);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
