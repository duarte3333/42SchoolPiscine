/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:29:00 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/18 15:30:36 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int agrc, char **agrv)
{
	int	counter;
	int	j;

	counter = agrc - 1;
	while (counter > 0)
	{
		j = 0;
		while (agrv[counter][j] != '\0')
		{
			ft_putchar(agrv[counter][j]);
			j++;
		}
		ft_putchar('\n');
		counter--;
	}
	return (0);
}
