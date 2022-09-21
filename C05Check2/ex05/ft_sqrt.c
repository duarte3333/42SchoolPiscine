/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:39:25 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/20 12:55:43 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	check;
	int	i;

	check = 0;
	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= 46340)
	{
		check = i * i;
		if (check == nb)
			return (i);
		i++;
	}
	return (0);
}