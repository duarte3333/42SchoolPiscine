/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:40:32 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/21 17:25:56 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_size_concact(char **strs, int size)
{
	int		size_concat;
	int		size_str;
	int		i;

	i = 0;
	size_concat = 0;
	while (i < size)
	{
		size_str = ft_strlen(strs[i]);
		size_concat += size_str;
		i++;
	}
	return (size_concat);
}

char	*fill_concat(char *concat, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		g;
	int		size_str;
	int		index_concat;

	i = -1;
	index_concat = -1;
	while ((++i) < size)
	{
		size_str = ft_strlen(strs[i]);
		j = -1;
		while ((++j) < size_str)
			concat[++index_concat] = strs[i][j];
		g = -1;
		while (sep[++g] != '\0')
		{
			if (i == (size - 1))
				break ;
			concat[++index_concat] = sep[g];
		}
	}
	return (concat);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_concat;
	char	*concat_final;
	char	*concat;

	if (size == 0)
		return ((char *)malloc(0 * sizeof(char)));
	size_concat = ft_size_concact(strs, size);
	concat = (char *)malloc((size_concat + size * ft_strlen(sep)) \
	* sizeof(char));
	concat_final = fill_concat(concat, size, strs, sep);
	return (concat_final);
}

// int	main(void)
// {
// 	char	*eita[2] = {"oi", "ola"};

// 	//printf("%i", ft_size_concact(eita, 2));
// 	printf("%s\n", ft_strjoin(2, eita, "|"));
// }
