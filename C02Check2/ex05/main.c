/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:53:58 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/13 15:55:22 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "ABCDEFGHI";
	str2 = "0BCDEFGHI";
	str3 = "ABCDeFGHI";
	str4 = "ABCDEFGH:";
	printf("str1: %s, is_uppercase: %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s, is_uppercase: %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: %s, is_uppercase: %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s, is_uppercase: %d\n", str4, ft_str_is_uppercase(str4));
	return (0);
}

