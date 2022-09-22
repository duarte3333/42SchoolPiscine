/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:18:53 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/09/22 17:38:44 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int	j;

	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] >= 'a' && argv[1][j] <= 'm' \
			|| argv[1][j] >= 'A' && argv[1][j] <= 'M')
			{
				argv[1][j] += 13;
			}
			if (argv[1][j] >= 'n' && argv[1][j] <= 'z'
				argv[1][j] += 13;
		}
	}
}
