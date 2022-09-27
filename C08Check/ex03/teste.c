/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:14:11 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/24 21:17:46 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>
void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	printf("%i", point->x);
}
int	main(void)
{
	t_point	point;
	set_point(&point);
	return (0);
}
