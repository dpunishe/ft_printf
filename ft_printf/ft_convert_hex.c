/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 02:44:46 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/16 02:44:47 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_hex(unsigned int n, t_opt *option, int conversion)
{
	int		num_size;

	if (n == 0 && option->precision == 0)
	{
		ft_putspace(option->width);
		return (option->width);
	}
	num_size = ft_get_lnumsize(n, HEX);
	if (option->zero == 1 && option->precision <= -1)
		option->precision = option->width;
	if (option->precision <= -1 || option->precision < num_size)
		option->precision = num_size;
	if (option->left == 0)
		ft_putl_right(option, n, num_size, conversion);
	else
		ft_putl_left(option, n, num_size, conversion);
	if (option->width > option->precision)
		return (option->width);
	else
		return (option->precision);
}
