/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:12:56 by damedina          #+#    #+#             */
/*   Updated: 2023/07/10 13:15:57 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	indice;

	indice = 0;
	while (indice < n)
	{
		if (src[indice] == '\0')
		{
			while (indice < n)
			{
				dest[indice] = '\0';
				indice++;
			}
			indice = n;
		}
		else
		{
			dest[indice] = src[indice];
			indice++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[50];

	src = "Patata";
	printf("%s\n", src);
	printf("%s\n", ft_strncpy(dest, src, 2));
	printf("%s\n", dest);
	printf("%s\n", strncpy(dest, src, 2));
	printf("%s\n", dest);
}
*/
