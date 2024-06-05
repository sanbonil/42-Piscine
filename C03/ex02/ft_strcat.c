/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:26:07 by sanbonil          #+#    #+#             */
/*   Updated: 2024/03/28 14:51:13 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (dest);
}

/*int main(void)
  {
  char dest[100]= "perro";
  char src[]= "gato";

  printf("%d",ft_strcat(dest, src));
  return(0);
  }*/
