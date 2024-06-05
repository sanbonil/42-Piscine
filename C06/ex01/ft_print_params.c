/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:03:25 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/09 11:50:29 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 0)
	{
		while (argv[i])
		{
			j = ft_strlen(argv[i]);
			write(1, argv[i], j);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
