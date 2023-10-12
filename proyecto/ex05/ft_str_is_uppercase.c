/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:05:15 by damedina          #+#    #+#             */
/*   Updated: 2023/07/08 20:08:44 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	indice;

	if (*str == '\0')
		return (1);
	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] < 'A' || str[indice] > 'Z')
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

	cadena = "PATATA";
	printf("%d\n", ft_str_is_uppercase(cadena));
}
*/
