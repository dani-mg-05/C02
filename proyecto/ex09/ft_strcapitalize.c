/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:04:37 by damedina          #+#    #+#             */
/*   Updated: 2023/07/09 15:32:52 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	cambiar_letra(char *str, int indice)
{
	if (str[indice] >= 'a' && str[indice] <= 'z')
	{
		if (str[indice - 1] < 'a' && str[indice - 1] > 'Z')
			str[indice] = str[indice] - 'a' + 'A';
		else if (str[indice - 1] < 'A' && str[indice - 1] > '9')
			str[indice] = str[indice] - 'a' + 'A';
		else if (str[indice - 1] < '0' || str[indice - 1] > 'z')
			str[indice] = str[indice] - 'a' + 'A';
	}
	else if (str[indice] >= 'A' && str[indice] <= 'Z')
	{
		if (str[indice - 1] >= 'a' && str[indice - 1] <= 'z')
			str[indice] = str[indice] - 'A' + 'a';
		else if (str[indice - 1] >= 'A' && str[indice - 1] <= 'Z')
			str[indice] = str[indice] - 'A' + 'a';
		else if (str[indice - 1] >= '0' && str[indice - 1] <= '9')
			str[indice] = str[indice] - 'A' + 'a';
	}
}

char	*ft_strcapitalize(char *str)
{
	int	indice;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	indice = 1;
	while (str[indice] != '\0')
	{
		cambiar_letra(str, indice);
		indice++;
	}
	return (str);
}
/*
int	main(void)
{
	char	cadena[] = "salut, coMMent tu vas ? 42mots quArante-deUx; CinQuante+et+un";

	printf("%s\n", ft_strcapitalize(cadena));
}
*/