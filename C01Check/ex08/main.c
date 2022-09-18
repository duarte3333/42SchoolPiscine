/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:18:06 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/12 18:26:25 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	tab[] = {1,8,3,4,9,6,1,8,6,5};
	int	j;

	size = 10;
	ft_sort_int_tab(tab, size);
	j = 0;
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
}
