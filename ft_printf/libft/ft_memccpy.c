#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*udst;
	unsigned char	*usrc;
	unsigned int	uc;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	uc = (unsigned char)c;
	while (n > i)
	{
		udst[i] = usrc[i];
		if (usrc[i] == uc)
			return (udst + i + 1);
		i++;
	}
	return (NULL);
}
