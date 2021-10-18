/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 02:44:37 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/16 02:44:38 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_percent(t_opt *option)
{
	int	len;

	len = 1;
	if (option->width > 1)
		len = option->width;
	if (option->left == 0)
	{
		if (option->zero == 1)
			ft_putzero(len - 1);
		else
			ft_putspace(len - 1);
		ft_putchar('%');
	}
	else
	{
		ft_putchar('%');
		ft_putspace(len - 1);
	}
	if (option->width > 1)
		return (option->width);
	else
		return (1);
}
