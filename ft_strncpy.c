/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:52:35 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/31 13:06:07 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*pointer;

	pointer = dest;
	while (n > 0)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{
			*dest = '\0';
			dest++;
		}
		n--;
	}
	return (pointer);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*original;
	char	destination[50];
	int		maximo;

	original = "Inserte chiste aquí";
	maximo = 13;
	printf("Original: %s\n", original);
	ft_strncpy(destination, original, maximo);
	printf("Copiado: %s\n", destination);
	return (0);
}
*/
