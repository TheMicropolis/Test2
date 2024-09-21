/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmauri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:41:49 by mmauri            #+#    #+#             */
/*   Updated: 2024/09/11 17:47:32 by mmauri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar_fd(45, fd);
		ft_putnbr_fd(-nb, fd);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar_fd((nb + '0'), fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd((nb % 10 + '0'), fd);
	}
}
/*
int	main(void)
{
	int	nb;

	nb = 0;
	ft_putnbr(nb);
	return (0);
}*/
