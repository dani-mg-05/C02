/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:32:57 by damedina          #+#    #+#             */
/*   Updated: 2023/07/09 14:59:12 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] >= 'a' && str[indice] <= 'z')
			str[indice] = str[indice] - 'a' + 'A';
		indice++;
	}
	return (str);
}
/*
int	main(void)
{
	char	cadena[] = "PaTatA";

	printf("%s\n", ft_strupcase(cadena));
}
*/
