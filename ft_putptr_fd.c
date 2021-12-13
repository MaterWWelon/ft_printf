/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:13:43 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/13 11:54:25 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"

void	ft_putnbr_base_fd(long long n, int fd)
{
	char *base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_base_fd(n / 16, fd);
		ft_putchar_fd(base[n % 16], fd);
	}
	else
		ft_putchar_fd(base[n % 16], fd);
}

void	ft_putptr_fd(long long ptr, int fd)
{
	ft_putstr_fd("0x", 1);
	ft_putnbr_base_fd(ptr, 1);
}
