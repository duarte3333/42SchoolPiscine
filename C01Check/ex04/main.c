/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:02:14 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/12 18:18:45 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{	
	int	x;
	int	y;
	int	*c;
	int	*d;

	x = 10;
	y = 5;
	c = &x;
	d = &y;
	ft_ultimate_div_mod(c, d);
	return (0);
}
