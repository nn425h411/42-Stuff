#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	d = 0;
	while (dst[d] && d < dstsize)
		d++;
	s = d;
	while (src[d - s] && d + 1 < dstsize)
	{
		dst[d] = src[d - s];
		d++;
	}
	if (d < dstsize)
		dst[d] = '\0';
	return (s + ft_strlen(src));
}
