#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*res;

	if (!s || (!(s && f)))
		return (NULL);
	if (!f)
		return ((char *)s);
	i = 0;
	l = ft_strlen(s);
	res = ft_calloc(l + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
