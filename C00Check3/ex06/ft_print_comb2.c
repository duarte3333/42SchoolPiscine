/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:06:18 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/09 13:23:51 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_write(int a1, int b2)
{
	ft_putchar(48 + a1 / 10);
	ft_putchar(48 + a1 % 10);
	ft_putchar(' ');
	ft_putchar(48 + b2 / 10);
	ft_putchar(48 + b2 % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{	
				ft_write(a, b);
				break ;
			}
			else
			{
				ft_write(a, b);
				ft_putchar(44);
				ft_putchar(32);
				b++;
			}
		}
		a++;
	}
}
