#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*lasts;
	char		*lastd;
	const char	*source;
	char		*dest;

	source = src;
	dest = dst;
	if (dest < source)
		while (len--)
			*dest++ = *source++;
	else
	{
		lasts = source + (len - 1);
		lastd = dest + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
