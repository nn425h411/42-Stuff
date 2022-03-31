#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		i2;
	int		i3;

	if (s1 || s2)
	{
		res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		i = 0;
		i2 = 0;
		i3 = 0;
		while (s1[i2])
			res[i++] = s1[i2++];
		while (s2[i3])
			res[i++] = s2[i3++];
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
