/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:38:41 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/12 09:42:51 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <unistd.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	ft_putchar_fd('A', 1);
	return (0);
} */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
