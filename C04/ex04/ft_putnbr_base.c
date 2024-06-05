/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:06:03 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/01 14:36:22 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_lenght(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_error(int i, char *base)
{
	int	j;

	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	if (base[1] == '\0')
		return (1);
	i = 0;
	j = 1;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

void	ft_printnbr_base(int nbr, char *base, int lenght)
{
	if (nbr >= lenght)
	{
		ft_printnbr_base(nbr / lenght, base, lenght);
		ft_putchar(base[nbr % lenght]);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	lenght;
	int	error;

	i = 0;
	lenght = 0;
	if (ft_check_error(i, base) == 1)
	{
		error = 1;
	}
	else
	{
		lenght = ft_lenght(base);
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		ft_printnbr_base (nbr, base, lenght);
	}
}

/*int main(void)
  {
  int nbr = 16;
  char base[] = "01";
  ft_putnbr_base(nbr, base);
  return (0);
  }*/
