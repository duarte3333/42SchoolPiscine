/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:42:16 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/15 17:40:06 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);


int main (void)
{
	char src[] = "Born to code";
    char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 12));
    printf("%s \n", dest);
}