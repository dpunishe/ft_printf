#include "../includes/ft_printf.h"

void	ft_eval_flag(t_info *info)
{
	info->flag[e_minus] = '0';
	info->flag[e_zero] = '0';
	while (*info->format == '-' || *info->format == '0')
	{
		if (*info->format == '-')
			info->flag[e_minus] = '1';
		if (*info->format == '0')
			info->flag[e_zero] = '1';
		info->format++;
	}
}
