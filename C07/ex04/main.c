/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:49:23 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 11:52:11 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		white(char *c);
int		checkbase(char *base);
int		inbase_getindex(char *base, char c, int a);
int		ft_atoi_base(char *str, char *base);
int		ft_size_base(int nbr_number, int len_base);
void	ft_putnbr_base(int nbr, char *base, char *nbr_base, int *i);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	char nbr[] = "-+--2147483648";
	char base_to[] = "01";
	char base_from[] = "0123456789";
	char *res;

	res = ft_convert_base(nbr, base_from, base_to);
	if (res == NULL)
		return (1);
	printf("%s\n", res);
	free(res);
	return (0);
}