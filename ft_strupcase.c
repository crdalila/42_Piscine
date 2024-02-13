/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:13:14 by dalcabre          #+#    #+#             */
/*   Updated: 2023/11/01 15:46:10 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	string[] = "tonto el que lo lea";

	printf("Original: %s\n", string);
	ft_strupcase(string);
	printf("Copia: %s\n", string);
	return (0);
}*/
