/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:03:50 by dalcabre          #+#    #+#             */
/*   Updated: 2023/11/01 13:05:45 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;
	int		result;

	s1 = "Hala";
	s2 = "Hzla";
	n = 3;
	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);
	return (0);
}*/
