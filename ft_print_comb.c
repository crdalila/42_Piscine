/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:53:39 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/18 14:20:58 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first;
	int	middle;
	int	last;

	first = '0';
	while (first <= '7')
	{
		middle = first + 1;
		while (middle <= '8')
		{
			last = middle +1;
			while (last <= '9')
			{
				write(1, &first, 1);
				write(1, &middle, 1);
				write(1, &last, 1);
				if (first != '7' || middle != '8' || last != '9')
					write(1, ", ", 2);
				last++;
			}
		middle++;
		}
	first++;
	}
}
