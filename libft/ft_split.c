/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:03:14 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:26:26 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nextwrd(const char *str, char set);

static int	ft_strlen_set(const char *str, char set);

static int	ft_countwrd(const char *str, char set);

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**splitted;
	int		i;
	int		len;

	words = ft_countwrd(s, c);
	splitted = ft_calloc((words + 1), sizeof(char *));
	if (!splitted)
		return (0);
	i = 0;
	while (words --)
	{
		s = ft_nextwrd(s, c);
		len = ft_strlen_set(s, c);
		*(splitted + i++) = ft_substr(s, 0, len);
		s += len;
	}
	*(splitted + i) = (void *)0;
	return (splitted);
}

static int	ft_countwrd(const char *str, char set)
{
	int	words;

	words = 0;
	while (*str)
	{
		if (*str == set)
			str++;
		else
		{
			words ++;
			while ((*str != set) && *str)
				str++;
		}
	}
	return (words);
}

static int	ft_strlen_set(const char *str, char set)
{
	int	i;

	i = 0;
	while ((*(str + i) != set) && *(str + i))
		i ++;
	return (i);
}

static char	*ft_nextwrd(const char *str, char set)
{
	while (*str && (*str == set))
		str++;
	return ((char *)str);
}
