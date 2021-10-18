/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 02:44:50 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/16 02:44:51 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_char(char c, t_opt *option)
{
	int		len;

	len = 1;
	if (option->width > 1)
		len = option->width;
	if (option->left == 0)
	{
		ft_putspace(len - 1);
		ft_putchar(c);
	}
	else
	{
		ft_putchar(c);
		ft_putspace(len - 1);
	}
	return (len);
}
