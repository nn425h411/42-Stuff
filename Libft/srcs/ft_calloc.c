#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	a = malloc(count * size);
	ft_memset(a, 0, count * size);
	return (a);
}
