#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!(ptr))
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
