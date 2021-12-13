/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:38:16 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/13 18:38:39 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"

void	ft_puthexa(long long n, int index)
{
	char *base;
	if (index == 1)
		base = "0123456789abcdef";
	else if (index == 2)
		base = "0123456789ABCDEF";

	if (n >= 16)
	{
		ft_puthexa(n / 16, index);
		ft_putchar_fd(base[n % 16], 1);
	}
	else
		ft_putchar_fd(base[n % 16], 1);
}
