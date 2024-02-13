/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:27:54 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/20 11:23:09 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/* int	main(void)
{
	int	edad1;
	int	edad2;

	edad1 = 15;
	edad2 = 42;
	printf("Antes de ejecutar: edad1 es %d y edad2 es %d \n", edad1, edad2);
	ft_swap(&edad1, &edad2);
	printf("Después de ejecutar: edad1 es %d y edad2 es %d \n", edad1, edad2);
	return (0);
} */
