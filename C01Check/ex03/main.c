/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:13:08 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/11 13:29:49 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{	
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 10;
	b = 2;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d", *div);
	printf("%d", *mod);
	return (0);
}
