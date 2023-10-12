/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:41:36 by damedina          #+#    #+#             */
/*   Updated: 2023/07/11 12:46:19 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				indice;
	unsigned int	longitud;

	indice = 0;
	longitud = 0;
	size--;
	while (src[indice] != '\0')
	{
		longitud++;
		if (size > 0)
		{
			dest[indice] = src[indice];
			size--;
			if (size == 0)
				dest[indice + 1] = '\0';
		}
		indice++;
	}
	dest[indice] = '\0';
	return (indice);
}
/*
int	main(void)
{
	char	*src;
	char	dest[] = "holaaaaaaaaaaaaaa";
	char	dest2[] = "holaaaaaaaaaaaaaa";

	src = "Patata";
	printf("%s\n", src);
	printf("%d\n", ft_strlcpy(dest, src, 15));
	printf("%s\n", dest);
	printf("\n");
	printf("%d\n", (int) strlcpy(dest2, src, 15));
	printf("%s\n", dest2);
}
*/
