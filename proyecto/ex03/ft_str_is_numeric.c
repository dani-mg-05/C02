/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:21:59 by damedina          #+#    #+#             */
/*   Updated: 2023/07/08 19:55:09 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	indice;

	if (*str == '\0')
		return (1);
	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] < '0' || str[indice] > '9')
			return (0);
		else
			indice++;
	}
	return (1);
}
/*
int	main(void)
{
	char *cadena;

	cadena = "12345";
	printf("%d\n", ft_str_is_numeric(cadena));
}
*/
