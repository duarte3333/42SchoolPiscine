/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:25:19 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/12 16:46:47 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	tab[] = {1,2,3,4,5};
	int	j;

	size = 5;
	ft_rev_int_tab(tab, size);
	j = 0;
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}

}
