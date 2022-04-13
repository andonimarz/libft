/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:30:49 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/12 10:37:26 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	char	s[] = "hola buenas";

	ft_putstr_fd(s, 1);
	return (0);
} */

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
	{
		write(fd, &s[i], 1);
	}
}
