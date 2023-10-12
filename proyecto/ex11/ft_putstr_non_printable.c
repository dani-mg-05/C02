/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:10:10 by damedina          #+#    #+#             */
/*   Updated: 2023/07/11 15:50:49 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	letra_hexadecimal(char c)
{
	char	num;

	if (c < 10)
	{
		num = ((int) c) + '0';
		write(1, &num, 1);
	}
	else if (c == 10)
		write(1, "a", 1);
	else if (c == 11)
		write(1, "b", 1);
	else if (c == 12)
		write(1, "c", 1);
	else if (c == 13)
		write(1, "d", 1);
	else if (c == 14)
		write(1, "e", 1);
	else if (c == 15)
		write(1, "f", 1);
}

void	escribir_hexadecimal(char c)
{
	if (c < 16)
	{
		write(1, "0", 1);
		letra_hexadecimal(c);
	}
	else if (c < 32)
	{
		write(1, "1", 1);
		letra_hexadecimal(c - 16);
	}
	else if (c == 127)
		write(1, "7f", 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] < 32 || str[indice] == 127)
		{
			write(1, "\\", 1);
			escribir_hexadecimal(str[indice]);
		}
		else
			write(1, &str[indice], 1);
		indice++;
	}
}
/*
int	main(void)
{
	char	cadena[] = "Patata\n\x12Patata\t\x7fPatata";
	ft_putstr_non_printable(cadena);
}
*/
