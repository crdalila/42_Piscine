/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:09:49 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/24 12:48:25 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a;
	int b;
	int cociente;
	int resto;

	a = 16;
	b = 2;
	ft_div_mod(16, 2, &cociente, &resto);
	printf("Resultado de división a/b = %d \n", cociente);
	printf("Resto de división a/b = %d \n", resto);
	return (0);
}
*/
