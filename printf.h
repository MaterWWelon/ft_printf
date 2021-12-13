/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:21:56 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/13 18:38:03 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>

void	ft_putptr_fd(long long ptr, int fd);
void	ft_putdeci(int n);
void	ft_putdecins(unsigned int n);
void	ft_puthexa(long long n, int index);

# endif
