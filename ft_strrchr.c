/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:54:05 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/06 17:34:47 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	str[] = "abcdefghijklmnopq";

	printf("%s\n", ft_strrchr(str, 'd'));
	return (0);
}*/

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	size_t	i;

	i = ft_strlen(s);
	str = (char *)s + i;
	ch = (char)c;
	while (i--)
	{
		if (*str == c)
			return (str);
		str--;
	}
	if (*str == ch)
		return (str);
	return (NULL);
}
