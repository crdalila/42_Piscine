/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:19:43 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/30 15:39:09 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>
sint	main(void)
{
	char	*original;
	char	destination[50] = "Hola";

	original = "Tonto el que lo lea";
	printf("%s\n", original);
	printf("%s\n", destination);
	ft_strcpy(destination, original);
	printf("%s\n", original);
	printf("%s\n", destination);
	return (0);
} */
