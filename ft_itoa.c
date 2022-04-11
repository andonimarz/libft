/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:35:29 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/11 10:42:12 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(void)
{
	printf("%s\n", ft_itoa(20041));
	printf("hola");
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	int		neg;
	char	*str;

	num = n;
	neg = 0;
	len = 0;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	while (num)
	{
		num = num / 10;
		len++;
	}
	printf("La largura del string es %d\n", len);
	num = n;
	str = (char *)malloc(len + neg + 1);
	if (str == NULL)
	{
		printf("1\n");
		return (NULL);
	}
	if (neg)
		str[0] = '-';
	str[len] = '\0';
	while (len--)
	{
		str[len + neg] = num % 10;
		num = num / 10;
		printf("%d\n", str[len + neg]);
	}
	printf("%s\n",str);
	return (str);
}

/* 	ft_fillstr(str, num, neg);
void ft_fillstr(char *str, long num, int neg)
{
	int	i;

	i = 0;
	
	
} */