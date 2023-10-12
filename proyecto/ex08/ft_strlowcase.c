/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:00:41 by damedina          #+#    #+#             */
/*   Updated: 2023/07/09 15:03:17 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] >= 'A' && str[indice] <= 'Z')
			str[indice] = str[indice] - 'A' + 'a';
		indice++;
	}
	return (str);
}
/*
int	main(void)
{
	char	cadena[] = "PaTatA";

	printf("%s\n", ft_strlowcase(cadena));
}
*/
