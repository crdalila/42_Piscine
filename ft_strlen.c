/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:03:26 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/24 12:41:25 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/*
	int	main(void)
{
	char *string;
	int i;

	string = "Hola y adiós";
	i = ft_strlen(string);
	printf("%i \n", i);
	return (0);
}
*/
