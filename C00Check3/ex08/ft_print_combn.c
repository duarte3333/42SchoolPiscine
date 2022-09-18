/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:03:49 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/10 18:07:46 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//recebe pointer do vetor
//enquanto nao chegar a n
//se alguma entrada do vetor for maior que a seguir -> FALSE
//segundo while so funciona se o tab tiver ordenado 
//do mais pequeno para o maior ou se tiverem todos iguais
//da print so dos que interessam

void	print(int *elem, int n)
{
	int		i;
	bool	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (elem[i - 1] >= elem[i])
			low = 0;
		i++;
	}
	if (low)
	{
		i = 0;
		while (i < n)
			ft_putchar(elem[i++] + 48);
		if (elem[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

//se n for 3 essa funcao vai de 0 a 999
//mas so vai dar print aos que interessam

void	ft_print_combn(int n)
{
	int		i;
	int		elem[11];

	i = 0;
	while (i < n)
	elem[i++] = 0;
	while (elem[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(elem, n);
		elem[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (elem[i] > 9)
			{
				elem[i - 1]++;
				elem[i] = 0;
			}
			i--;
		}
	}
}
