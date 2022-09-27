/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:31:53 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/19 16:43:10 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str1)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		ft_putchar(str1[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **str1, char **str2)
{	
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	main(int agrc, char **agrv)
{
	int	counter;
	int	counter2;
	int	j;

	counter = 1;
	while (counter < (agrc - 1))
	{
		counter2 = 1;
		while (counter2 < (agrc - 1))
		{
			if (ft_strcmp(agrv[counter2], agrv[counter2 + 1]) > 0)
				ft_swap(&agrv[counter2], &agrv[counter2 + 1]);
			counter2++;
		}
		counter++;
	}
	j = 1;
	while (j < agrc)
	{
		ft_putstr(agrv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
