#include "libft.h"

static	char	**ft_free_mal(char **list)
{
	unsigned int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

static	int	ft_counts_el(char const *s, char c, int	i, int	j)
{
	while (s[j + 1])
	{
		if (s[j] == c && s[j + 1] != c)
			i++;
		j++;
	}
	return (i + 1);
}

static	int	ft_ellen(char const *s, char c, int i)
{
	while (s[i] != c)
		i++;
	return (i);
}

static	char	**ft_main(char const *s, char c, char **mal, int counts)
{
	int		i;
	int		len;
	char	*next_str;

	i = 0;
	next_str = (char *)s;
	while (i < counts)
	{
		while (*next_str == c)
			next_str++;
		len = ft_ellen(next_str, c, 0);
		mal[i] = (char *)malloc(sizeof(char) * len);
		if (!mal[i])
			return (ft_free_mal(mal));
		ft_strlcpy(mal[i], next_str, len + 1);
		next_str += len;
		i++;
	}
	if (i != 1)
		mal[i - 1] = NULL;
	return (mal);
}

char	**ft_split(char const *s, char c)
{
	char	**mal;
	int		counts;

	if (!s)
		return (NULL);
	counts = ft_counts_el(s, c, 0, 0);
	mal = (char **)malloc(sizeof(char *) * counts + 1);
	if (!mal)
		return (NULL);
	return (ft_main(s, c, mal, counts));
}
