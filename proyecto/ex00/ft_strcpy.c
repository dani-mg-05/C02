/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:37:09 by damedina          #+#    #+#             */
/*   Updated: 2023/07/10 13:55:28 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//Función que copia el contenido de src en dest
char	*ft_strcpy(char *dest, char *src)
{
	int		indice;

	indice = 0;
	while (*(src + indice) != '\0')
	{
		*(dest + indice) = *(src + indice);
		indice++;
	}
	*(dest + indice) = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[50] = "Patataaaaaaaaaaaaaaa";
	char	dest2[50];

	src = "Patata";
	printf("%s\n", src);
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest2, src));
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
*/