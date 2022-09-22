/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_ft_strrev.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:43:16 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 18:52:50 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int		size;
	int		i;
	char	temp;

	size = ft_strlen(str);
	i = 0;
	while (i < (size / 2))
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}	
	return (str);
}

int	main(void)
{
	char *a;
	char b[] = "olagay";
	a = ft_rev_print(b);
	printf("%s", a);
	return (0);
}
