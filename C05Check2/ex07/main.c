/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:04:38 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/20 11:45:27 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%i", ft_find_next_prime(2147483631));
}