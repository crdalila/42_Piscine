/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:42:17 by dalcabre          #+#    #+#             */
/*   Updated: 2023/11/02 17:41:39 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = "Hala";
	s2 = "Hbla";
	result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	return (0);
}*/
