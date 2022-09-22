/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:22:31 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 18:50:09 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int		main(void)
{
	int		str_n;
	char	*str;
	char	*sep;
	char	**strs;

	str = "abc abgc abc";
	sep = " ";
	strs = ft_split(str, sep);
	str_n = 0;
	while (str_n < 3)
	{
		printf("[%d]: %s\n", str_n, strs[str_n]);
		str_n++;
	}
	free(strs);
	return (0);
}