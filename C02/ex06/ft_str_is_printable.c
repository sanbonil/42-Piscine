/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:59:06 by sanbonil          #+#    #+#             */
/*   Updated: 2024/03/26 13:52:47 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main(void)
{
	char str[] = "hola5 que tal";
	char a = '0';
	char b = '1';
	int n = 0;

	ft_str_is_alpha(str);
	if (n == 0)
	{
		write(1, &a, 1);
	}
	else
	{
		write(1, &b, 1);
	}
	return (0);
}*/
