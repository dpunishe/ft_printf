#include "libft.h"
char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)src);
	while ((src[i] != '\0') && (i < n))
	{
		if (src[i] == find[0])
		{
			j = 1;
			while (((find[j] != '\0') && (src[i + j] == find[j]) \
				&& ((j + i) < n)))
				j++;
			if (find[j] == '\0')
				return ((char*)&src[i]);
		}
		i++;
	}
	return (0);
}
