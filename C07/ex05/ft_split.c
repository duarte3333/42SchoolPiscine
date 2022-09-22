/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:07:06 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 19:07:37 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	in_str(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

int	ft_size_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		size;

	i = -1;
	size = 0;
	while (str[++i] != '\0')
	{
		j = -1;
		while (charset[++j] != '\0')
		{
			if (str[i] == charset[j])
				size++;
		}
	}
	return (size + 1);
}

int	ft_size_str_split(char *str, char *charset, int g_old)
{
	int		i;
	int		g;
	int		size;

	i = -1;
	g = -1;
	while (str[++i] != '\0')
	{
		size = 0;
		while (!in_str(str[i], charset))
		{
			size++;
			if (in_str(str[i + 1], charset) || str[i + 1] == 0)
			{
				g++;
				break ;
			}
			i++;
		}
		if (g == g_old)
			return (size);
	}
	return (-1);
}

void	pre_ft_split(char *str, char *charset, char **str_str_split)
{
	int		size_str;
	int		i;
	int		g;
	int		c;

	i = -1;
	g = 0;
	while (str[++i] != '\0')
	{
		c = 0;
		size_str = ft_size_str_split(str, charset, g);
		str_str_split[g] = (char *)malloc((size_str + 1) * sizeof(char));
		str_str_split[g][size_str] = 0;
		while (!in_str(str[i], charset))
		{
			str_str_split[g][c] = str[i];
			if (in_str(str[i + 1], charset) || str[i + 1] == 0)
			{
				g++;
				break ;
			}
			i++;
			c++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**str_str_split;

	size = ft_size_split(str, charset);
	str_str_split = (char **)malloc((size) * sizeof(char *));
	str_str_split[size - 1] = 0;
	if (!str_str_split)
		return (NULL);
	pre_ft_split(str, charset, str_str_split);
	return (str_str_split);
}
