/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecins.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:14:41 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/17 17:52:50 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdecins(unsigned int n)
{
	int	i;

	i = 1;
	if (n >= 10)
	{
		i += ft_putdecins(n / 10);
		ft_putchar_fd(n % 10 + '0', 1);
	}
	else
	{
		ft_putchar_fd(n + '0', 1);
		i++;
	}
	return (i);
}
