#include "libft.h"

static size_t	ft_count_size(char const *s, char c)
{
	size_t	count;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (i == len)
				return (count);
		}
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static void	ft_splitter(char const *s, char c, char **res, size_t count)
{
	size_t	i;
	size_t	len;
	size_t	sui;
	char	*str;

	i = 0;
	len = 0;
	sui = 0;
	while (sui < count)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (len != 0)
			{
				str = ft_calloc(len + 1, sizeof(char));
				str = ft_memcpy(str, s + i - len, len);
				res[sui] = str;
				sui++;
			}
			len = 0;
		}
		else
			len++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**res;

	if (!s)
		return (NULL);
	count = ft_count_size(s, c);
	res = malloc((count + 1) * sizeof(char *));
	ft_splitter(s, c, res, count);
	res[count] = NULL;
	return (res);
}
