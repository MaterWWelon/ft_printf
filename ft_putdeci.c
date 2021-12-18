/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdeci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:38:59 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/15 18:42:25 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdeci(int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
