/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:13:43 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/18 15:05:43 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_fd(long long n, int fd)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 1;
	if (n >= 16)
	{
		i += ft_putnbr_base_fd(n / 16, fd);
		ft_putchar_fd(base[n % 16], fd);
	}
	else
	{
		ft_putchar_fd(base[n % 16], fd);
		i++;
	}
	return (i);
}

int	ft_putptr_fd(long long ptr, int fd)
{
	ft_putstr_fd("0x", fd);
	return (ft_putnbr_base_fd(ptr, fd) + 1);
}
