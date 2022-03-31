#include "libft.h"

static int	is_it_set(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*res;

	if (!(s1 || set))
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (is_it_set(s1[start], set) == 0)
		start++;
	if (start == end)
	{
		res = ft_strdup("");
		return (res);
	}
	while (is_it_set(s1[end - 1], set) == 0)
		end--;
	len = end - start;
	res = malloc((len + 1) * sizeof(char));
	res = ft_memcpy(res, s1 + start, len);
	res[len] = '\0';
	return (res);
}
