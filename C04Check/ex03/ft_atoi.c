/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:04:36 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/18 12:31:35 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	white(char *c)
{
	int	i;

	i = 0;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	end_w;
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	end_w = white(str);
	while (str[end_w] == '-' || str[end_w] == '+')
	{
		if (str[end_w] == '-')
			sign *= -1;
		end_w++;
	}
	while (str[end_w] <= '9' && str[end_w] >= '0' )
	{
		nb = nb * 10 + str[end_w] - '0';
		end_w++;
	}
	return (nb * sign);
}
