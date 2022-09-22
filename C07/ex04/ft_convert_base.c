/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:28:08 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 11:36:43 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	white(char *c)
{
	int	i;

	i = 0;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	j;
	int	size;

	i = -1;
	size = ft_strlen(base);
	while (base[++i] != '\0')
	{
		j = i + 1;
		if (base[0] == '\0' || size == 1)
			return (0);
		if (base[i] <= 32 || base[i] == '+' || base[i] == '-' || base[i] == 127)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] != base[j])
				j++;
			else
				return (0);
		}
	}
	return (1);
}

int	inbase_getindex(char *base, char c, int a)
{
	int	i;
	int	j;

	if (a == 1)
	{
		i = -1;
		while (base[++i])
		{
			if (base[i] == c)
				return (1);
		}
		return (0);
	}
	if (a == 2)
	{
		j = -1;
		while (base[++j])
		{
			if (base[j] == c)
				return (j);
		}
		return (-1);
	}
	return (0);
}
