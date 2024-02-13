/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:13:14 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/31 13:03:53 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	string[] = "CAISTEEEEE";

	printf("Original: %s\n", string);
	ft_strlowcase(string);
	printf("Copia: %s\n", string);
	return (0);
}*/
