/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:16:57 by dalcabre          #+#    #+#             */
/*   Updated: 2023/11/02 16:28:02 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	*src;
	char	dest[100] = "Hola, soy Edu ";

	src = "feliz Navidad";
	ft_strcat(dest, src);
	printf("Dos cadenas juntas: %s", dest);
	return (0);
}*/
