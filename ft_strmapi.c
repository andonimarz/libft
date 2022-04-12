/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:26:54 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/12 09:06:40 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	f(unsigned int i, char c);

int	main(void)
{
	char s[] = "HOLA BUENAS";

	printf("%s", ft_strmapi(s, f));
	return (0);
}

char	f(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	i = 0;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
