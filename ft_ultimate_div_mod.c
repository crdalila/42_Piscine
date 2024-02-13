/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:39:12 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/24 12:47:24 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	rest;

	result = *a / *b;
	rest = *a % *b;
	*a = result;
	*b = rest;
}

/*
	int main(void)
{	
	int num1;
	int num2;
   
	num1 = 16;
	num2 = 2;
	ft_ultimate_div_mod(&num1, &num2);
	printf("Result: %d\nRest: %d\n", num1, num2);
	return (0);
}
*/
