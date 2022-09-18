/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:33:01 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/11 21:12:57 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int dif, int i, int x, int y)
{
	if (x == 1 && y != 1)
	{
		ft_putchar('A');
		while (i <= (x - dif))
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}	
	else
	{
		ft_putchar('A');
		while (i < (x - dif))
		{
			ft_putchar('B');
			i++;
		}	
		if (i == (x - dif) | y == 1)
		{
			ft_putchar('C');
		}
	}
	ft_putchar('\n');
}

void	center_lines(int i, int y, int dif, int x)
{
	int	j;

	j = 0;
	while (j < (y - 2))
	{
		i = 0;
		ft_putchar('B');
		while (i < (x - dif))
		{
			ft_putchar(' ');
			i++;
		}
		if (i == (x - dif) | y == 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j++;
	}	
}

void	end_line(int i, int dif, int x, int y)
{
	ft_putchar('C');
	while (i < (x - dif))
	{
		ft_putchar('B');
		i++;
	}
	if (i == (x - dif) | y == 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

int	dif_function(int x, int y, int i)
{
	int	dif_f;

	if (x == 1 && y != 1)
	{
		ft_putchar('A');
		while (i < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('B');
			i++;
		}
		write(1, "\nC\n", 3);
		return (0);
	}
	else if ((x - 2) >= 0)
	{
		dif_f = 2;
		return (dif_f);
	}
	else
	{
		dif_f = 1;
		return (dif_f);
	}
}

void	rush(int x, int y)
{
	int	i;
	int	dif;

	i = 0;
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (x != 1 && y == 1)
	{
		dif = dif_function(x, y, i);
		first_line(i, dif, x, y);
	}
	else if (x == 1 && y != 1)
		dif = dif_function(x, y, i);
	else
	{
		dif = dif_function(x, y, i);
		first_line(i, dif, x, y);
		i = 0;
		center_lines(i, y, dif, x);
		end_line(i, dif, x, y);
	}
}
