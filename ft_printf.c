/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:35:47 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/14 18:05:14 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const	char *format, ...)
{
	size_t	i;
	va_list args;
	va_start(args, format);

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar_fd(format[i], 1);
		else
		{
			if (format[++i] == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			else if(format[i] == 's')
			{
				//if (!args)										// a corriger
					//ft_putstr_fd("(NULL)", 1);
				ft_putstr_fd(va_arg(args, char *), 1);
			}
			else if(format[i] == 'p')
			{
				//if (!va_arg(args, long long))						// a corriger
					//ft_putstr_fd("0x0", 1);
				ft_putptr_fd(va_arg(args, long long), 1);
			}
			else if(format[i] == 'd')
				ft_putdeci(va_arg(args, int));
			else if(format[i] == 'i')
				ft_putdeci(va_arg(args, int));
			else if(format[i] == 'u')
				ft_putdecins(va_arg(args, unsigned int));
			else if(format[i] == 'x')
				ft_puthexa(va_arg(args, long long), 1);
			else if(format[i] == 'X')
				ft_puthexa(va_arg(args, long long), 2);
			else if(format[i] == '%')
				ft_putchar_fd('%', 1);
		}
		i++;
	}
	va_end(args);
	return (1);
}

int main(){
	//char *s = "abc";
	ft_printf("test: %X\n", 42);
	printf("Vrai: %X\n", 42);
}