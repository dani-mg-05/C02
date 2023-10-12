/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:46:55 by damedina          #+#    #+#             */
/*   Updated: 2023/07/10 13:22:37 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] < 32 || str[indice] == 127)
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

	cadena = "Pat\nata";
	printf("%d\n", ft_str_is_printable(cadena));
}
*/
