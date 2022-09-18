/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:25:40 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/11 11:09:41 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*pta;
	int	*ptb;

	a = 1;
	b = 0;
	pta = &a;
	ptb = &b;
	ft_swap(pta, ptb);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
