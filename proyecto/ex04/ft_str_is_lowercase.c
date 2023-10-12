/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:56:47 by damedina          #+#    #+#             */
/*   Updated: 2023/07/10 13:19:30 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	indice;

	if (*str == '\0')
		return (1);
	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] < 'a' || str[indice] > 'z')
			return (0);
		else
			indice++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*cadena;

	cadena = "Patata";
	printf("%d\n", ft_str_is_lowercase(cadena));
}
*/
