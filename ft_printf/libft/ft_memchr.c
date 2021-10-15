#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *ustr;
	unsigned char uc;

	ustr = (unsigned char *)str;
	uc = (unsigned char)c;
	while (n)
	{
		if (*ustr == uc)
			return (ustr);
		ustr++;
		n--;
	}
	return (NULL);
}
