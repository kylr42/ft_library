#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == c)
			return ((char *)(s + i));
	if (c == 0 && s[i] == 0)
		return ((char *)(s + i));
	return (NULL);
}
