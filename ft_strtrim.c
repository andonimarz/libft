/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:28:40 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/11 09:28:01 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	s1[] = "holaholahola";
	char	set[] = "hol";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/

int	ft_cmpset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_cmpset(s1[i], set))
		i++;
	len = (ft_strlen(s1) - 1);
	while (len > i && ft_cmpset(s1[len], set))
		len--;
	str = ft_substr(s1, i, (len - i) + 1);
	return (str);
}
