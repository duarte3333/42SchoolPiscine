/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:33:30 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/20 19:42:47 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*arr;
	int	i;

	if (min >= max)
	{
		arr = 0;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	a = min;
	while (a < max)
	{
		arr[i] = a;
		i++;
		a++;
	}
	return (arr);
}
