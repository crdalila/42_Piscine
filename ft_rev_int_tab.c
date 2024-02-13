/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:54:56 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/24 12:39:13 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temporal;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temporal = tab[start];
		tab[start] = tab[end];
		tab[end] = temporal;
		start++;
		end--;
	}
}

/*
 	int	main(void)
{
	int	numbers[6] = {0, 1, 2, 3, 4, 5};
	int size;
	int i;

	size = 6;
	i = 0;

	printf("Original:");
	while (i < size)
	{
		printf("%i", numbers[i]);
		i++;
	}
	ft_rev_int_tab(numbers, size);
	printf("\n");
	i =0;
	printf("Inverted:");
	while (i < size)
	{
		printf("%i", numbers[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
