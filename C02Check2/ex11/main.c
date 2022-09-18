/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:07:27 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/14 15:16:58 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putchar(char c);
int		ft_char_is_printable(char c);
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = {'0', '1', 2, 30, 160, '4', 'a', 19, 'C', 0};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}
