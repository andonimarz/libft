/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:54:29 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/12 10:25:28 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <unistd.h>

void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	ft_putnbr_fd(-1234, 1);
	return (0);
} */

void	ft_putnbr_fd(int n, int fd)
{
	char	num;
	long	lnb;

	lnb = n;
	if (lnb < 0)
	{
		write(fd, "-", 1);
		lnb = -lnb;
	}
	if (lnb / 10)
		ft_putnbr_fd(lnb / 10, fd);
	num = lnb % 10 + '0';
	write(fd, &num, 1);
}
