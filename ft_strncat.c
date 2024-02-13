/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:04:05 by dalcabre          #+#    #+#             */
/*   Updated: 2023/11/01 13:18:10 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <unistd.h>
int	main(void)
{
	char	dest[100] = "Hola, soy Edu, ";
	char	*src;
	int		nb;

	src = "feliz Navidad!";
	nb = 3;
	ft_strncat(dest, src, nb);
	write (1, &dest, 100);
	return (0);
}*/
