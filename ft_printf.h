/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:21:56 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/18 15:02:16 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_putstr(char *s);
int	ft_putptr_fd(long long ptr, int fd);
int	ft_putdeci(int n);
int	ft_putdecins(unsigned int n);
int	ft_puthexa(long long n, char c);

#endif
