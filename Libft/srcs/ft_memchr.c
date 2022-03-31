#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n-- > 0)
		if (*src++ == (unsigned char)c)
			return ((char *)src - 1);
	return (NULL);
}
