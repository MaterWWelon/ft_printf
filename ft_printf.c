/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:35:47 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/18 15:05:05 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	reste(va_list args, char format)
{
	int	compteur;

	compteur = 0;
	if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		compteur++;
	}
	else if (format == 's')
		compteur += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		compteur += ft_putptr_fd(va_arg(args, long long), 1);
	else if (format == 'd' || format == 'i')
		compteur += ft_putdeci(va_arg(args, int));
	else if (format == 'u')
		compteur += ft_putdecins(va_arg(args, unsigned int)) - 1;
	else if (format == 'x' || format == 'X')
		compteur += ft_puthexa(va_arg(args, long long), format) - 1;
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		compteur++;
	}
	return (compteur);
}

int	ft_printf(const	char *format, ...)
{
	size_t	i;
	va_list	args;
	int		compteur;

	va_start(args, format);
	i = 0;
	compteur = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			compteur++;
		}
		else
			compteur += reste(args, format[++i]);
		i++;
	}
	va_end(args);
	return (compteur);
}
