/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:25:40 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/10 20:56:48 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	n;
	int	*pt1;
	int	**pt2;
	int	***pt3;
	int	****pt4;
	int	*****pt5;
	int	******pt6;
	int	*******pt7;
	int	********pt8;
	int	*********pt9;

	n = 0;

	pt1 = &n;
	pt2 = &pt1;
	pt3 = &pt2;
	pt4 = &pt3;
	pt5 = &pt4;
	pt6 = &pt5;
	pt7 = &pt6;
	pt8 = &pt7;
	pt9 = &pt8;

	ft_ultimate_ft(pt9);
	printf("%d", n);
}
