/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:48:21 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/15 13:24:00 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		count = 0;
		while (str[i + count] == to_find[count] && str[i + count] != '\0')
		{
			if (to_find[count + 1] == '\0')
				return (&(str[i]));
			count++;
		}	
		i++;
	}
	return (0);
}
