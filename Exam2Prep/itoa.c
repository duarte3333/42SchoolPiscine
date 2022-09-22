/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:08:23 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 19:42:05 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	ft_size(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 10)
		return (i + 1);
	while (nbr > 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i + 1);
}

void	ft_putnbr(int nbr, char *str_nbr, int i)
{
	if (nbr == INT_MIN)
	{
		str_nbr[i] = '-';
		i++;
		ft_putnbr(2, str_nbr, i);
		ft_putnbr((147483648), str_nbr, i);
	}
	if (nbr < 0)
	{
		str_nbr[i] = '-';
		nbr = nbr * (-1);
		i++;
		ft_putnbr(nbr, str_nbr, i);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, str_nbr, i++);
		ft_putnbr(nbr % 10, str_nbr, i);
	}
	else
	{
		str_nbr[i] = nbr + '0';
		i++;
	}
}

char	*ft_itoa(int nbr)
{
	char	*str_nbr;
	int		size;
	int		i;

	i = 0;
	size = ft_size(nbr);
	printf("%i\n", size);
	str_nbr = (char *)malloc(size * sizeof(char));
	ft_putnbr(nbr, str_nbr, i);
	return (str_nbr);
}

int main(void)
{
	printf("%s", ft_itoa(123));
}