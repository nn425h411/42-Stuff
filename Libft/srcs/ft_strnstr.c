#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[n] && haystack[i + n] == needle[n] && i + n < len)
			{
				if (needle[n + 1] == '\0')
					return ((char *)&haystack[i]);
				n++;
			}
		}
	i++;
	}
	return (NULL);
}
