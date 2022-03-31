#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*sr;

	sr = s;
	while (*s)
		s++;
	while (s >= sr)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}
