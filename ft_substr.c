#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (NULL);
	if ((int)(start + len) <= ft_strlen(s))
	{
		while (i < len)
		{
			substr[i] = s[start + i];
			i++;
		}
	}
	substr[i] = 0;
	return (substr);
}
