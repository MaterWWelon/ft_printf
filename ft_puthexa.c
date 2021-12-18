/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:38:16 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/18 15:06:15 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(long long n, char c)
{
	char	*base;
	int		i;

	i = 1;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		i += ft_puthexa(n / 16, c);
		ft_putchar_fd(base[n % 16], 1);
	}
	else
	{
		ft_putchar_fd(base[n % 16], 1);
		i++;
	}
	return (i);
}
