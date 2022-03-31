#include "libft.h"

static char	*ft_malloc_check(char const *s, size_t len, size_t slen)
{
	char	*str;

	str = 0;
	if (len + 1 < ((unsigned char)*s))
		str = (char *)malloc(len + 1);
	if (len + 1 > ((unsigned char)*s))
		str = (char *)malloc(slen + 1);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen + 1)
	{
		str = ft_strdup("");
		return (str);
	}
	str = ft_malloc_check(s, len, slen);
	i = 0;
	if (s)
	{
		while (i < len && i + start < slen)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
