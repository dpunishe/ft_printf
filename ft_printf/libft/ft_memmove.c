#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned	char	*usrc;
	unsigned	char	*udst;

	i = 0;
	usrc = (unsigned char *)src;
	udst = (unsigned char *)dst;
	if (udst == NULL && usrc == NULL)
		return (NULL);
	if (usrc > udst)
	{
		while (i < n)
		{
			udst[i] = usrc[i];
			i++;
		}
		return (dst);
	}
	else
	{
		while (n-- > 0)
			udst[n] = usrc[n];
		return (dst);
	}
}
