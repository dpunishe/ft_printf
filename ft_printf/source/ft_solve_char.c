#include "../includes/ft_printf.h"

void	c_handle_width(t_info *info)
{
	if (info->width > 1)
	{
		info->total_length = info->total_length + (info->width - 1);
		info->width++;
		if (info->flag[e_zero] == '1' && info->flag[e_minus] != '1')
			while (--info->width > 1)
				ft_putchar('0');
		else
			while (--info->width > 1)
				ft_putchar(' ');
	}
}

void	ft_solve_char(t_info *info)
{
	char	c;

	c = va_arg(info->arguments, int);
	if (info->flag[e_minus] == '1')
		ft_putchar(c);
	c_handle_width(info);
	if (info->flag[e_minus] != '1')
		ft_putchar(c);
	info->total_length++;
	info->format++;
}
