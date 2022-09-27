/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:37:08 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/24 19:26:43 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		white(char *c);
int		checkbase(char *base);
int		inbase_getindex(char *base, char c, int a);

int	ft_atoi_base(char *str, char *base)
{
	int	end_w;
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	if (checkbase(base))
	{
		end_w = white(str);
		while (str[end_w] == '-' || str[end_w] == '+')
		{
			if (str[end_w] == '-')
				sign *= -1;
			end_w++;
		}
		while (inbase_getindex(base, str[end_w], 1) \
		&& inbase_getindex(base, str[end_w], 2) != -1)
		{
			nb = nb * ft_strlen(base) + inbase_getindex(base, str[end_w], 2);
			end_w++;
		}
		return (nb * sign);
	}
	return (0);
}

int	ft_size_base(int nbr_number, int len_base)
{
	int	i;
	int	temp_nbr;

	temp_nbr = nbr_number;
	i = 0;
	if (nbr_number == 0)
		return (0);
	while (nbr_number != 0)
	{
		nbr_number = nbr_number / len_base;
		i++;
	}
	if (temp_nbr < 0)
		return (i + 2);
	return (i + 1);
}

void	ft_putnbr_base(int nbr, char *base, char *nbr_base, int *i)
{
	int		len;
	long	nb;
	int		sign;

	len = ft_strlen(base);
	sign = 1;
	nb = nbr;
	if (checkbase(base))
	{
		if (nb < 0)
		{
			nb *= -1;
			sign = -1;
		}
		if (sign == -1)
			nbr_base[++(*i)] = '-';
		if (nb < len)
			nbr_base[++(*i)] = base[nb];
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base, nbr_base, i);
			ft_putnbr_base(nb % len, base, nbr_base, i);
		}
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_number;
	int		size;
	char	*nbr_base;
	int		len_base_to;
	int		i;

	if (checkbase(base_from) == 1 && checkbase(base_to) == 1)
	{		
		i = -1;
		len_base_to = ft_strlen(base_to);
		nbr_number = ft_atoi_base(nbr, base_from);
		size = ft_size_base(nbr_number, len_base_to);
		nbr_base = (char *)malloc((size) * sizeof(char));
		nbr_base[size - 1] = 0;
		if (!nbr_base)
			return (NULL);
		ft_putnbr_base(nbr_number, base_to, nbr_base, &i);
		return (nbr_base);
	}
	else
		return (NULL);
}
