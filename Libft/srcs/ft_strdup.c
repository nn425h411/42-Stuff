#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*s2;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *)malloc (len + 1);
	if (s2)
	{
		while (s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
	}
	return (s2);
}
