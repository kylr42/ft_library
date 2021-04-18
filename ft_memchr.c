#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char	*str;

	str = (char *)arr;
	while (n-- > 0)
		if (*str == c)
			return (str);
	else
		str++;
	return (NULL);
}
