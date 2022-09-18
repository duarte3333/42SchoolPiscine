/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:59:32 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/14 09:56:08 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

void	upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

int	is_char_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_char_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (is_char_alpha(str[i]) || is_char_num(str[i]))
		{
			upcase(str, i);
			i++;
			while (is_char_alpha(str[i]) || is_char_num(str[i]))
			{
				lowcase(str, i);
				i++;
			}
		}
		i++;
	}
	return (str);
}
