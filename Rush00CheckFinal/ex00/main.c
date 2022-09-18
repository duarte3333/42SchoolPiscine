/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:32:57 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/11 21:13:59 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	first_line(int dif, int i, int x, int y);
void	center_lines(int i, int y, int dif, int x);
void	end_line(int i, int dif, int x, int y);
int		dif_function(int x, int y, int i);
void	rush(int x, int y);

int	main(void)
{
	rush(4, 4);
	return (0);
}
