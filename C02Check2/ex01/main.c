/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:32:20 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/14 12:00:35 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "duarte";
	char src1[] = "duarte";
	char dest[] = "oi";
	char dest1[10] = "oi";

	printf("%s", ft_strncpy(dest, src, 10));
	printf("\n%s", strncpy(dest1, src1, 10));
}