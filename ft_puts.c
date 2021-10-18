/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 02:44:04 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/16 02:44:05 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char s)
{
	ft_putchar_fd(s, FD);
	return (1);
}

void	ft_putspace(int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putchar(' ');
		i++;
	}
}

void	ft_putzero(int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putchar('0');
		i++;
	}
}

void	ft_put_int(int n)
{
	ft_putnbr_fd(n, FD);
}

void	ft_put_uint(unsigned int n, int base, int conversion)
{
	char	ch;

	if (n >= (unsigned int)base)
		ft_put_uint(n / (unsigned int)base, base, conversion);
	if (conversion == SMALLX || conversion == BIGX)
	{
		ch = n % (unsigned int)base;
		if (ch > 9)
			ch += 'a' - 10;
		else
			ch += '0';
	}
	else
		ch = (n % (unsigned int)base + '0');
	if (conversion == BIGX)
		ch = ft_toupper(ch);
	ft_putchar(ch);
}
