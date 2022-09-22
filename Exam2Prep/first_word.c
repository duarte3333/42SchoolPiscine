/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:27:55 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 16:42:58 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkspaces(char a)
{
	if ((a >= 9 && a <= 13) || a == 32)
		return (0);
	return (1);
}

int	main(int agrc, char **agrv)
{
	int	i;

	i = 0;
	if (agrc == 2)
	{
		while (agrv[1][i] != '\0' && checkspaces(agrv[1][i]))
		{
			ft_putchar(agrv[1][i]);
			i++;
		}
		i++;
	}
	else
	{
		ft_putchar('\n');
	}
}
