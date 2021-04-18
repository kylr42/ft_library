#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *) destination;
	src = (unsigned char *) source;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
		while (++i <= n)
			dst[n - i] = src[n - i];
	else
		while (n-- > 0)
			*(dst++) = *(src++);
	return (dst);
}
